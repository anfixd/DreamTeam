#include <bits/stdc++.h>

using namespace std;

string sum(string a, string b);

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

string m1(string a) {
    int reminder = 1;
    for (int i = 7; i >= 1; i--) {
        if (reminder == 0) {
            break;
        } else {
            if (a[i] == '0') {
                a[i] = '1';
                if (a[i - 1] == '0') {
                    reminder = 1;
                } else {
                    reminder = 0;
                }
            } else {
                a[i] = '0';
                reminder = 0;
            }
        }
    }
}

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

int main() {
    int a, b; cin >> a >> b;
    cout << todec(sum(tobin(a), tobin(b)));
}
