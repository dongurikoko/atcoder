#include <bits/stdc++.h>
using namespace std;

int main() {
  int suma = 0;
  int sumb = 0;
  for(int i=0;i<9;i++){
    int x;
    cin >> x;
    suma += x;
  }
  for(int i=0;i<8;i++){
    int y;
    cin >> y;
    sumb += y;
  }

  cout << suma - sumb + 1 << endl;
}
