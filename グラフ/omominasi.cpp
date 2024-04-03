#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>; 
// Graph G[v]が頂点vに隣接する頂点のリストを表す
// G[2] = {5,7}など

int main(){
    // 頂点数と辺数
    int N,M;
    cin >> N >> M;
    Graph G(N);
    for(int i=0;i<M;i++){
        int a,b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a); // 無向グラフの場合
    }
}
