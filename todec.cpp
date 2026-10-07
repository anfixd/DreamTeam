int todec(string a) {
    bool otr = (a[0] == '1');
    if (otr) {
        a = m1(a);
    }
    int p = 1;
    int ans = 0;
    for (int i = 7; i >= 0; i--) {
        if (a[i] == '1') {
            ans += p;
        }
        p *= 2;
    }
    if (otr) ans = -ans;
    return ans;
}