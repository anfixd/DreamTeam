string tobin(int a) {
    string ans = "00000000";
    if (a < 0) {
        a = -a;
        ans[0] = '1';
    }
    string s;
    while (a) {
        char c = (a % 2) + '0';
        a /= 2;
        s = c + s;
    }
    while (s.size() < 8) {
        s = '0' + s;
    }
    for (int i = 1; i < 8; i++) {
        ans[i] = s[i];
    }
    if (ans[0] == '1') {
        for (int i = 1; i < 8; i++) {
            if (ans[i] == '1') ans[i] = '0';
            else ans[i] = '1';
        }
        ans = sum(ans, "0000001");
    }
    return ans;
}
