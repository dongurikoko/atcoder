#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    unordered_set<string> S;
    long long ans = 0;

    // 全部
    ans = s.size() * (s.size() - 1) / 2;
   
   // aからzまで重複をカウントして引く
   for(int i=0;i<26;i++){
         char c = 'a' + i;
         long long cnt = 0;
         for(int j=0;j<s.size();j++){
              if(s[j] == c){
                cnt++;
              }
         }
         ans -= cnt * (cnt - 1) / 2;
   }

   cout << ans << endl;


}
