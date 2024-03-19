#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int q;
    cin >> q;
    char c[q],d[q];
    for(int i=0;i<q;i++){
        cin >> c[i] >> d[i];
    }

    map<char,char> mp;
    for(int i=0;i<26;i++){
        char ch = 'a' + i;
        for(int i=0;i<q;i++){
            if(ch == c[i]){
                ch = d[i];
            }
        }
        mp['a'+i] = ch;
    }

    vector<char> ans;

    for(int i=0;i<n;i++){
        ans.push_back(mp[s[i]]);
    }

    for(int i=0;i<n;i++){
        cout << ans[i];
    }

}
