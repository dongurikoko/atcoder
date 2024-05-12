#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> p(n);
    vector<int> indices(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        indices[i] = i;  // インデックスを保存
    }

    // 数値をもとにインデックスでソートする
    sort(indices.begin(), indices.end(), [&](int a, int b) {
        return p[a] < p[b] || (p[a] == p[b] && a < b);
    });

    int min_diff = INT_MAX;
    multiset<int> window;

    // 初期ウィンドウの設定
    for (int i = 0; i < k; i++) {
        window.insert(indices[i]);
    }

    for (int i = 0; i <= n - k; i++) {
        // ウィンドウ内の最大値と最小値の差を計算
        int max_index = *window.rbegin();
        int min_index = *window.begin();
        min_diff = min(min_diff, max_index - min_index);

        // ウィンドウを更新
        if (i + k < n) {
            window.erase(window.find(indices[i]));
            window.insert(indices[i + k]);
        }
    }

    cout << min_diff << endl;
    return 0;
}
