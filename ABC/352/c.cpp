#include <bits/stdc++.h>
using namespace std;



int main(){
  int n;
  cin >> n;
  long long a[n],b[n],c[n];
  for(int i=0;i<n;i++){
    cin >> a[i] >> b[i];
    c[i] = b[i] - a[i];
  }

  long long tall = 0;
  long long an = 0;
  for(int i=0;i<n;i++){
    if(tall <= c[i]){
      an = i;
      tall = c[i];
    }
  }

  long long ans = 0;

  for(int i=0;i<n;i++){
    if(i == an){
      ans = ans + b[i];
    }
    else{
      ans = ans + a[i];
    }
  }

  cout << ans << endl;
}

