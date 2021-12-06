#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, n, p = 0;
    cin >> x >> n;

    for (int i = 0; i < n; i++) {
        int pi;
        cin >> pi;
        p += pi;
    }

    int out = x * n - p + x;
    cout << out << endl;
    return 0;
}
