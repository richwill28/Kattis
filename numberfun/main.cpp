#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;

        bool isAddition = (a + b) == c;
        bool isSubtraction = (a - b) == c || (b - a) == c;
        bool isMultiplication = (a * b) == c;
        bool isDivision = ((double) a / b == (double) c) || ((double) b / a == (double) c);
        if (isAddition || isSubtraction || isMultiplication || isDivision) {
            cout << "Possible" << endl;
        } else {
            cout << "Impossible" << endl;
        }
    }
    return 0;
}
