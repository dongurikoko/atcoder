#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int n,x,y,z;
  cin >> n >> x >> y >> z;
  if(x <= z and z <= y){
    cout << "Yes" << endl;
    return 0;
  }
  if(z >= y and x >= z){
    cout << "Yes" << endl;
    return 0;
  }
  cout << "No" << endl;
  return 0;
}
