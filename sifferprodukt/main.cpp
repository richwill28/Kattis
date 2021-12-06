#include <bits/stdc++.h>
using namespace std;

int main() {
    string x;
    cin >> x;

    while (stoi(x) / 10 != 0) {
        int product = 1;
        for (auto& i : x) {
            int digit = i - '0';
            if (digit != 0) {
                product *= digit;
            }
        }
        x = to_string(product);
    }

    cout << x << endl;
    return 0;
}