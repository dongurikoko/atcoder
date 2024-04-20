#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<pair<int, int>> swaps;
    for (int i = 0; i < n; i++) {
        // 正しい位置にあるか、すでにチェック済みのサイクルの一部か確認
        while (a[i] != i + 1) {
            int correct_pos = a[i] - 1;
            // 交換
            swap(a[i], a[correct_pos]);
            // 交換記録
            swaps.push_back({i + 1, correct_pos + 1});
        }
    }

    // 交換操作の回数と詳細を出力
    cout << swaps.size() << endl;
    for (auto &swap : swaps) {
        cout << swap.first << " " << swap.second << endl;
    }

    return 0;
}
