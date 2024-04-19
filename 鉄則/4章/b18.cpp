#include <bits/stdc++.h>
using namespace std;

bool dp[69][10009];

int main() {
    int n,s;
    cin >> n >> s;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    dp[0][0] = true;

    for(int i=1;i<=n;i++){
        for(int j=0;j<10009;j++){
            if(j >= a[i-1]){
                if(dp[i-1][j] == true || dp[i-1][j-a[i-1]] == true){
                    dp[i][j] = true;
                }
            }
            else{
                if(dp[i-1][j] == true){
                    dp[i][j] = true;
                }
            }
        }
    }

    if(dp[n][s] == false){
        cout << -1 << endl;
        return 0;
    }

    vector<int> ans;
    int i = n;
    int now = s;
    while(i>0){
        if(dp[i-1][now] == true){
            i--;
        }
        else{
            ans.push_back(i);
            now -= a[i-1];
            i--;
        }
    }

    //ans.push_back(1);

    sort(ans.begin(),ans.end());
    cout << ans.size() << endl;
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
}
