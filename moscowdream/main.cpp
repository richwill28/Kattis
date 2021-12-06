#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, n;
    cin >> a >> b >> c >> n;

    bool hasEnoughEasy = a >= 1;
    bool hasEnoughMedium = b >= 1;
    bool hasEnoughHard = c >= 1;
    bool hasEnoughProblems = (n >= 3) && (a + b + c >= n);
    if (hasEnoughEasy && hasEnoughMedium && hasEnoughHard && hasEnoughProblems) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
