#include <iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long ans = 0;
    for(long long i=1;i*i*i<=n;i++){
        long long k = i * i * i;
        // convert k to string
        string s = to_string(k);
        int length = s.size();
        for(int j=0;j<length;j++){
            if(s[j] != s[length-j-1]){
                break;
            }
            if(j == length-1){
                ans = k;
            }
        }

    }
    cout << ans << endl;
}
