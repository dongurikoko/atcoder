#include <bits/stdc++.h>
using namespace std;

const int MAXN = 201;
char a[MAXN][MAXN];
int energy[MAXN][MAXN];
map<pair<int,int>,int> mp;
int h, w;
int sh, sw, th, tw;

int main() {
    int dx[4] = {1,-1,0,0};
    int dy[4] = {0,0,1,-1};

    
    cin >> h >> w;
  
    for (int i = 0; i < MAXN; i++) {
        for (int j = 0; j < MAXN; j++) {
            a[i][j] = '#';
            energy[i][j] = -1; // 初期状態では全てのマスのエネルギーは-1（到達不可能）
        }
    }

    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            cin >> a[i][j];
            if (a[i][j] == 'S') {
                sh = i;
                sw = j;
            } else if (a[i][j] == 'T') {
                th = i;
                tw = j;
            }
        }
    }

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int r,c,e;
        cin >> r >> c >> e;
        mp[{r,c}] = e;
    }

    queue<pair<int,int>> q;
    q.push({sh,sw});
    energy[sh][sw] = 0;

    while(!q.empty()){
        auto [x,y] = q.front();
        q.pop();

        for(int i=0;i<4;i++){
            int nx = x + dx[i], ny = y + dy[i];
            if(nx < 1 || nx > h || ny < 1 || ny > w || a[nx][ny] == '#') continue;

            int newEnergy = energy[x][y] - 1;
            if(mp.count({x,y})){
              newEnergy = max(newEnergy,mp.at({x,y})-1);
            }

            if (newEnergy > energy[nx][ny]) {
                energy[nx][ny] = newEnergy;
                q.push({nx, ny});
            }
        }
    }

    if (energy[th][tw] >= 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
