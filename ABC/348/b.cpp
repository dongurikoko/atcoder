#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int x[n],y[n];
  for(int i =0;i<n;i++){
    cin >> x[i] >> y[i];
  }

  for(int i=0;i<n;i++){
    double ans_kyori = 0;
    int ans = 0;
    for(int j=0;j<n;j++){
      if(i == j) continue;
      double kyori = sqrt((x[i] - x[j])*(x[i] - x[j]) + (y[i] - y[j])*(y[i] - y[j]));
      if(ans_kyori < kyori){
        ans_kyori = kyori;
        ans = j+1;
      }
    }

    cout << ans << endl;
  }
}
