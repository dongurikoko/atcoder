#include <bits/stdc++.h>
using namespace std;


int main() {
  string s;
  cin >> s;

  string sub = s.substr(3, 3);  // 4文字目から3文字取り出す
    int num = stoi(sub);
    if(num >= 1 && num <= 349 && num != 316){
      cout << "Yes" << endl;
    }
    else{
      cout << "No" << endl;
    }
}
