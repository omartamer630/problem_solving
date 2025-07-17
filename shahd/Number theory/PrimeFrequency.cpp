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

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
   int t; cin>>t; int N=1;
   vector<bool> is_prime = sieve(2000);
   while(t--){
    string s; cin>>s;
   map<char,int>mp;
   vector<int>res;

   for(auto c:s){
     mp[c]++;
   }

   for(auto &[c,i]:mp){
    if(is_prime[i]){
        res.push_back(c);
    }
   }

   sort(res.begin(),res.end());
   
   if(res.size()){
     cout<<"Case "<<N<<": ";
   for(auto i:res){
    cout<<(char)i;
   }
   
}
else{
   cout<<"Case "<<N<<": empty";
   }
   
cout<<'\n';
N++;
}
    return 0;
}