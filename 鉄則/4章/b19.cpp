#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll w[109],v[109];
ll dp[109][100009];

int main() {
    ll N,W;
    cin >> N >> W;
    for(int i=1;i<=N;i++){
        cin >> w[i] >> v[i];
    }

    for(int i=0;i<109;i++){
        for(int j=0;j<100009;j++){
            dp[i][j] = 10e16;
        }
    }

    dp[0][0] = 0;
    for(int i=1;i<=N;i++){
        for(int j=0;j<=100009;j++){
            if(j >= v[i]){
                dp[i][j] = min(dp[i-1][j],dp[i-1][j-v[i]]+w[i]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    ll ans = 0;
    for(ll i=0;i<=100000;i++){
        if(dp[N][i] <= W){
            ans = max(ans,i);
        }
    }

    cout << ans << endl;

}
