#include <string>
#include <iostream>

using namespace std;
 
int main(){
  string s,t;
  cin >> s >> t;
  int j = 0;
  for(int i=0;i<t.size();i++){
    if(t[i] == s[j]){
      cout << i+1 << " ";
      j++;
    }
  }
}
