#include <bits/stdc++.h>
using namespace std;
 
int w[109],v[109];
long long dp[109][100009];

int main() {
    long long N,W;
    cin >> N >> W;
    for(int i=1;i<=N;i++){
        cin >> w[i] >> v[i];
    }

    for(int i=0;i<=N;i++){
        for(int j=0;j<=W;j++){
            dp[i][j] = -1e18;
        }
    }

    dp[0][0] = 0;
    for(int i=1;i<=N;i++){
        for(int j=0;j<=W;j++){
            if(j>=w[i]){
                dp[i][j] = max(dp[i-1][j-w[i]] + v[i],dp[i-1][j]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    long long ans = 0;

    for(int i=0;i<=W;i++){
        ans = max(ans,dp[N][i]);
    }

    cout << ans << endl;

}
