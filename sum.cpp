string sum(string a, string b) {
    string ans = "00000000";
    int reminder = 0;
    for (int i = 7; i > 0; i--) {
        int ax = a[i] - '0', bx = b[i] - '0';
        int s = (ax + bx + reminder);
        if (s > 1) {
            s -= 2;
            reminder = 1;
        } else {
            reminder = 0;
        }
        char c = (s + '0');
        ans[i] = c;
    }
    return ans;
}