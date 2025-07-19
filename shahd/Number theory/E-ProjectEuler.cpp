#include<iostream>
#include<bits/stdc++.h>
using namespace std;


vector<bool> sieve(int n){
 vector<bool> prime(n+1 , true); 
 prime[0]=prime[1]=false; 
 for(int i =2;i*i<=n;i++){
    if(prime[i]){
      for(int j=i*i;j<=n;j+=i){
        prime[j]=false;
      }
    }
 }
   return prime;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t; cin>>t;
    vector<bool>si = sieve(10001);
    vector<int>v;
    for(int i=2;i<=10001;i++){
        if(si[i]==true){
            v.push_back(i);
        }
    }
   
    while(t--){
        int n; cin>>n;
        cout<<v[n-1]<<'\n';
    }
    

    return 0;
}