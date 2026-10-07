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