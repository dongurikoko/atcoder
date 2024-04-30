// https://atcoder.jp/contests/atc001/tasks/dfs_a
#include <bits/stdc++.h>
using namespace std;

int x[4] = {0,-1,0,1};
int y[4] = {1,0,-1,0};

bool visited[509][509];
int H,W;
char c[509][509];

void dfs(int h,int w){
    visited[h][w] = true;

    /*for(int i=0;i<4;i++){
        h += x[i];
        w += y[i];
        if(h < 0 || h >= H || w < 0 || w >= W || c[h][w] == '#' || visited[h][w] == true){
            continue;
        }

        dfs(h,w);
    }*/

    for(int i=0;i<4;i++){
        int nh = h + x[i];
        int nw = w + y[i];
        if(nh < 0 || nh >= H || nw < 0 || nw >= W || c[nh][nw] == '#' || visited[nh][nw] == true){
            continue;
        }

        dfs(nh,nw);
    }

}

int main(){
    cin >> H >> W;
    int start_x;
    int start_y;
    int goal_x;
    int goal_y;

    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            cin >> c[i][j];
            if(c[i][j] == 's'){
                start_x = i;
                start_y = j;
            }
            if(c[i][j] == 'g'){
                goal_x = i;
                goal_y = j;
            }

        }
    }

    dfs(start_x,start_y);

    if(visited[goal_x][goal_y]){
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;

}
