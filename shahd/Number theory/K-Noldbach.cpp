#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<bool> prime;

// Sieve of Eratosthenes
vector<int> sieve(int n){
    prime.assign(n+1, true);
    vector<int> primes;
    prime[0] = prime[1] = false;

    for(int i = 2; i <= n; i++){
        if(prime[i]){
            primes.push_back(i);
            for(int j = 2*i; j <= n; j += i){
                prime[j] = false;
            }
        }
    }
    return primes;
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
  // int t; cin>>t;
  vector<int> isprime = sieve(3000);
  
  /*for(auto i:isprime){
      cout<<i<<' ';
  }*/
   int n,m; cin>>n>>m;
   int c=0;
   for(int i=0;i<isprime.size()-1;i++){
       int sum = isprime[i] + isprime[i+1] + 1;
    if(prime[sum] && sum<=n){
      c++;
    }
   }
   if(c>=m){
    cout<<"Yes";
   }
   else{
    cout<<"No";
   }
    return 0;
}