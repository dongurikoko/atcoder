#include <vector>
#include <iostream>
#include <map>
using namespace std;

long long score[200009];
int main(){
    long long n,t;
    cin >> n >> t;
    map<long, long> mp;
    mp[0] = n;
    for(int i=0;i<t;i++){
        long long a,b;
        cin >> a >> b;
        mp[score[a]]--;
        if(mp[score[a]] == 0) mp.erase(score[a]);
        score[a] += b;
        mp[score[a]]++;
        cout << mp.size() << endl;
    }

}
