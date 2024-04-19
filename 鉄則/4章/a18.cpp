#include <bits/stdc++.h>
using namespace std;
 

int main() {
    int n,s;
    cin >> n >> s;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    bool dp[n+1][10009];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<10009;j++){
            dp[i][j] = false;
        }
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

    if(dp[n][s]){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

}
