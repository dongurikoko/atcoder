#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  ll a[n];
  for(int i=0;i<n;i++){
    cin >> a[i];
  }

  vector<ll> ans;

  for(int i=0;i<n;i++){
    ans.push_back(a[i]);
    int x = ans.size();

    if(x <= 1){
      continue;
    }
    while(ans[x-1] == ans[x-2]){
      ans[x-2] ++;
      ans.pop_back();
      x--;
      if(x <= 1){
        break;
      }
    }
  }

    cout << ans.size() << endl;
}
