#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,q;
  cin >> n >> q;

  int ha[n+1];
  for(int i=0;i<n+1;i++){
    ha[i] = true;
  }

  for(int i=0;i<q;i++){
    int t;
    cin >> t;
    if(ha[t] == false){
      ha[t] = true;
    }
    else{
      ha[t] = false;
    }
  }
  int ans=0;

  for(int i=1;i<=n;i++){
    if(ha[i] == true){
      ans ++;
    }
  }

  cout << ans;
}
