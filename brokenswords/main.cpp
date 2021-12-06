#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int t = 0, b = 0, l = 0, r = 0;
    while (n--) {
        string slat;
        cin >> slat;

        if (slat[0] == '0') {
            t += 1;
        }

        if (slat[1] == '0') {
            b += 1;
        }

        if (slat[2] == '0') {
            l += 1;
        }

        if (slat[3] == '0') {
            r += 1;
        }
    }

    int tb = t + b;
    int lr = l + r;
    int newSword = min(tb, lr) / 2;
    tb -= newSword * 2;
    lr -= newSword * 2;

    cout << newSword << " " << tb << " " << lr << endl;
    return 0;
}
