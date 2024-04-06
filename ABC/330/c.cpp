#include <bits/stdc++.h>
using namespace std;

int main(){
    long long d;
    cin >> d;
    long long ans = 1000000000000000000;

    for(long long x=0;x*x<=d;x++){
        long long a = x * x - d;
        if(a > 0){
            ans = min(ans,a);
        }
        else{
            long long y = sqrt(-a);
            ans = min(ans,abs(y*y+a));
            y = y + 1;
            ans = min(ans,abs(y*y+a));
            y = y - 2;
            ans = min(ans,abs(y*y+a));
            
        }
    }
    cout << ans << endl;
}
