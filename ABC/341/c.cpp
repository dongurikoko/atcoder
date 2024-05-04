#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int h,w,n;
    cin >> h >> w >> n;
    string t;
    cin >> t;
    vector<vector<char>> s(h, vector<char>(w));
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin >> s[i][j];
        }
    }

    long long ans = 0;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(s[i][j] == '#')continue;
            bool can = true;
            int ni = i;
            int nj = j;
            for(int x=n-1;x>=0;x--){
                if(t[x] == 'R'){
                    nj --;
                    if(s[ni][nj] == '#'){
                        can = false;
                        break;
                    }
                }
                else if(t[x] == 'L'){
                    nj ++;
                    if(s[ni][nj] == '#'){
                        can = false;
                        break;
                    }
                }
                else if(t[x] == 'U'){
                    ni ++;
                    if(s[ni][nj] == '#'){
                        can = false;
                        break;
                    }
                }
                else if(t[x] == 'D'){
                    ni --;
                    if(s[ni][nj] == '#'){
                        can = false;
                        break;
                    }
                }

            }

            if(can){
                ans ++;
            }
        }
    }

    cout << ans << endl;
}
