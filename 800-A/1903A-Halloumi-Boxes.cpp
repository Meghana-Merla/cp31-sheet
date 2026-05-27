#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        vector<long long> b(a.begin(), a.end());
        sort(b.begin(), b.end());
        if(k>1||b==a) cout << "YES\n";
        else cout << "NO\n";
    }
}