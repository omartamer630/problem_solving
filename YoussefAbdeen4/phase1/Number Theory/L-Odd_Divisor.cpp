#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#define el "\n"
#define ll long long
#define cin(v) for(auto &i : v)cin>>i
#define cout(v) for(auto &i : v)cout<<i<<" "
#define S stack<int>
#define V vector<bool>
#define P pair< ll ,ll>
#define Vp vector<P>
#define fast  ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;


void solve() {
    ll t ,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n&(n-1)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}

int main() {
    fast
    solve();
    return 0;
}