//x以上のうち最小のものを答える
//set型には二分探索を行う機能(lower_bound)がついていて、O(logN)
#include <bits/stdc++.h>
using namespace std;

int main(){
   set<int> S;
   S.insert(15);
   S.insert(50);
   S.insert(35);

   auto itr1 = S.lower_bound(40);
   cout << *itr1 << endl; //50

   itr1--;
   cout << *itr1 << endl; //35(一個小さいものを指す)

   itr1++;
   cout << *itr1 << endl; //50

   auto itr2 = S.lower_bound(65);
   if(itr2 == S.end()) cout << "end" << endl; //xがSの最大値より大きい場合

}
