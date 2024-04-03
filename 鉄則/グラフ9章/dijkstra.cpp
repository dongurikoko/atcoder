//最短経路を求める問題をpriority_queでとく
//O(MlogM)
#include <bits/stdc++.h>
using namespace std;

int a[100009],b[100009],c[100009];
vector<pair<int,int>> G[100009];

priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> que;
//距離
int cur[100009];
bool kakutei[100009];

int main(){
    int n,m;
    cin >> n >> m;
    for(int i=1;i<=m;i++){
        cin >> a[i] >> b[i] >> c[i];
        G[a[i]].push_back({b[i],c[i]});
        G[b[i]].push_back({a[i],c[i]});
    }

    for(int i=1;i<=n;i++){
        cur[i] = 1e9;
    }
    for(int i=1;i<=n;i++){
        kakutei[i] = false;
    }

    // スタート地点をキューに追加
    cur[1] = 0;
    que.push({cur[1],1});

    // ダイクストラ法
    while(!que.empty()){
        // 一番距離が小さいものを取り出す
        int pos = que.top().second;
        que.pop();

        // すでに確定していたらスルー
        if(kakutei[pos]) continue;

        // curを更新
        kakutei[pos] = true;
        for(auto i:G[pos]){
            int next = i.first;
            int cost = i.second;
            if(cur[next] > cur[pos] + cost){
                cur[next] = cur[pos] + cost;
                que.push({cur[next],next});
            }
        }

    }

    for(int i=1;i<=n;i++){
        if (cur[i] == 1e9) cout << "-1" << endl;
        else cout << cur[i] << endl;
    }
    return 0;
}
