#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string out = s.substr(1, s.length() - 2);
    out = "h" + out + out + "y";
    cout << out << endl;
}
