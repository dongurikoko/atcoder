#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int answer = 0;
        for(int i=0;i<s.size()-1;i++){
            vector<char> ans;
            ans.push_back(s[i]);
            map<char,int> m;
             m[s[i]] = 1;
            for(int j=i+1;j<s.size();j++){
                if(m[s[j]] == 0){
                    ans.push_back(s[j]);
                    m[s[j]] = 1;
                }
                else{
                    if(ans.size() > answer){
                        answer = ans.size();
                    }
                    break;
                }
            }
        }
        return answer;
    }
};
