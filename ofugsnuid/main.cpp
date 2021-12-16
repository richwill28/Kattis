# include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr;
    while (n--) {
        int i;
        cin >> i;
        arr.push_back(i);
    }

    for (int i = arr.size() - 1; i >= 0; i--) {
        cout << arr[i] << endl;
    }

    return 0;
}
