#include <bits/stdc++.h>

using namespace std;

string tobin(int a) {

}

string sum(string a, string b) {
    string ans = "00000000";
    ll reminder = 0;
    for (int i = 7; i > 0; i--) {
        ll ax = a[i] - '0', bx = b[i] - '0';
        ll s = (ax + bx + reminder);
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

int todec(string a) {

}

int main() {

}
