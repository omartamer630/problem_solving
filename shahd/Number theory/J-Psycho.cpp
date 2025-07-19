#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// عايز اجيب البرايم و الغير برايم طب هعمل اي هعدي علي كل رقم اشوف هو برايم ولا لا وامشي علي كل مضعافاته اخليها مش برايم
vector<bool> sieve(int n){
 vector<bool> prime(n+1 , true); //هخلي كله ترو في الاول
 prime[0]=prime[1]=false; // دول مش برايم
 for(int i =2;i*i<=n;i++){
    if(prime[i]){
      for(int j=i*i;j<=n;j+=i){
        prime[j]=false;
      }
    }
 }
   return prime;
}
//-----------------------------------------------------------------------------------------------------------------------------------
bool primeFactor(int n){
  map<int,int>prim;
  for(int i=2;i*i<=n;i++){
    while(n%i==0){
      prim[i]++;
      n/=i;
    }
  }
  if(n>1){
    prim[n]++;
  }
  int e=0,odd=0;
  for(auto &[fac,power]:prim){
    if(power%2==0) e++;
    else odd++;
  }
  return e>odd;
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
   int t; cin>>t;
  // vector<bool> is_prime = sieve(2000);
   while(t--){
    int n; cin>>n;
    if(primeFactor(n)){
      cout<<"Psycho Number\n";
    }
    else{
      cout<<"Ordinary Number\n";
    }
}
    return 0;
}