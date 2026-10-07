#include <bits/stdc++.h>

using namespace std;

string tobin(int a) {
    string ans = "00000000";
    if (a < 0) {
        a = -a;
        ans[0] = '1';
    }
    string s;
    while (a) {
        char c = (a % 10) + '0';
        s = c + s;
    }
    while (s.size() < 8) {
        s = '0' + s;
    }
    for (int i = 1; i < 8; i++) {
        ans[i] = s[i];
    }
    return ans;
}

string sum(string a, string b) {

}

int todec(string a) {
    // Перевод в десятичную
}

int main() {

}
