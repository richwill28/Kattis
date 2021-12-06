#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;  // min PQ
    for (int i = 2; i < 2 + (n - 1); i++) {
        int d;
        cin >> d;

        vector<int> pair = {d, i};
        pq.push(pair);
    }

    cout << "1 ";
    while (!pq.empty()) {
        cout << pq.top()[1] << " ";
        pq.pop();
    }
    cout << endl;
    return 0;
}
