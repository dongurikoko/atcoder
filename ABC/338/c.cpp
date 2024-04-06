// xとyがある時、xを固定してyの値を考える

#include <bits/stdc++.h>
using namespace std;

int q[12],a[12],b[12];
int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> q[i];
    }
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    for(int i=1;i<=n;i++){
        cin >> b[i];
    }

    long long ans = 0;
    long long y = 0;

    for(long long x=0;x<=1000000;x++){
        y = 1000000000;
        for(int i=1;i<=n;i++){
            if((q[i] - a[i] * x) < 0){
                y = -1;
                break;
            }
            if(b[i] == 0) continue;
            y = min(y,(q[i] - a[i] * x) / b[i]);   
        }
        if(y > 0){
            ans = max(ans,x + y);
        }
    }

    cout << ans << endl;

}
