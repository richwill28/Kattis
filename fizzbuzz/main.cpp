#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, n;
    cin >> x >> y >> n;

    for (int i = 1; i <= n; i++) {
        bool isDivisible = false;
        if (i % x == 0) {
            cout << "Fizz";
            isDivisible = true;
        }

        if (i % y == 0) {
            cout << "Buzz";
            isDivisible = true;
        }

        if (!isDivisible) {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}
