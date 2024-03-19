#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int m;
    cin >> m;
    vector<int> b(m);
    for(int i=0;i<m;i++){
        cin >> b[i];
    }
    int l;
    cin >> l;
    vector<int> c(l);
    for(int i=0;i<l;i++){
        cin >> c[i];
    }
    int q;
    cin >> q;
    vector<int> x(q);
    for(int i=0;i<q;i++){
        cin >> x[i];
    }

    map<long long,long long> sum;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            for(int k=0;k<l;k++){
                sum[a[i]+b[j]+c[k]] = 1;
            }
        }
    }

    for(int i=0;i<q;i++){
        if(sum[x[i]] > 0){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}
