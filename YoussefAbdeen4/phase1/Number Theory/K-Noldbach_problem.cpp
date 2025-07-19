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

vector <ll> seive(int n){
    V isPrime(n+1,true);
    isPrime[0]=isPrime[1]=false;
    vector <ll> primes; 
    for (int i = 2; i <= n; i++) {
        if(isPrime[i]){
            primes.push_back(i);
            for (int j = i*2; j <=n; j+=i) {
                isPrime[j]=false;
            }
        }
    }
    
    sort(primes.begin(),primes.end());
    return primes;
}

void solve() {
    int n ,k,sum=1,cnt=0;
    cin>>n>>k;
    auto primes = seive(n);
    
    for (int i = 1; i < primes.size() ; i++) {
        int s = primes[i]+primes[i-1];
        sum+=s;
        if(binary_search(primes.begin(),primes.end(),sum)){
            cnt++;
        }
        sum-=s;
    }
    
    if(cnt>=k){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}

int main() {
    fast
    solve();
    return 0;
}