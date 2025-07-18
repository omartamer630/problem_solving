#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// عايز اجيب البرايم و الغير برايم طب هعمل اي هعدي علي كل رقم اشوف هو برايم ولا لا وامشي علي كل مضعافاته اخليها مش برايم
vector<int> sieve(int n){
 vector<bool> prime(n+1 , true); //هخلي كله ترو في الاول
 vector<int>primes;
 prime[0]=prime[1]=false; // دول مش برايم
 for(int i =2;i*i<=n;i++){
    if(prime[i]){
      primes.push_back(i);
      for(int j=i*i;j<=n;j+=i){
        prime[j]=false;
      }
    }
 }
   return primes;
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

//--------------------------------------------------------------------------------------------------------------------------
bool is_prim(int n){
vector<int>res = divisor(n);
int si = (int)res.size();
if(n==1 || si>2) return false;
return true;
}
//---------------------------------------------------------------------------------------------------------------
vector<int>divisor(int n){
 vector<int>res;
 for(int i=2;i*i<=n;i++){
    if(n%i==0){
        res.push_back(i);
    }
    if(i*i!=n){
        res.push_back(n/i);
    }
 }
 return res;
}
//----------------------------------------------------------------------------------------------------------------


int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
  // int t; cin>>t;
  
    return 0;
}