#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  map<int,int> mp;
  for(int i=0;i<n;i++){
    int a,c;
    cin >> a >> c;
    if(mp.count(c)){
      if(mp.at(c) > a){
        mp.at(c) = a;
      }
    }
    else{
      mp[c] = a;
    }
  }

  long long ans = 0;
  // mapをイテレートして、最大値を見つける
  for (auto& p : mp) {
    ans = max(ans, (long long)p.second);
  }

  cout << ans << endl;
}
