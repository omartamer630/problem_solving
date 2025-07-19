/************************************************************
        هذا الحبيب الذي في مدحه شرفي * و ذكره طيب في مسمعي وفي فمي
        هذا أبـــا القاســم المخـتار من مضــرِ * هـــذا أجــل عــبـاد اللـــهِ كــلــهـــمِ
      هذا هو المصطفى أزكى الورى نسباً *  سبحان من خصـه بالفضل و الكـرمِ
      هذا الذي لا يقبـل الـفرض من أحــدِِ * و لا الآذان بــلا ذكــر اســـمهِ العـــلـمِ
        أغــــــر علــــيه للــنبــوة خـــــاتـــم * مــن نــــــور يــــلــــوح و يــــشــهــد
        و ضم الإله اسم النبي إلى اسمه * إذا قــال فـي الخــمس الــمؤذنُ أشـهد
        و شـق لـــه مــــن اسـمه ليوجـله * فــذو الـعرش محـمودُ و هـــذا مـحمدُ

            لا شيءَ في مَدحِ الرَّسولِ يَفِيهِ
            كلُّ المحاسنِ والمكارمِ فيهِ !

            صلّوا عليهِ وسلّموا ﷺ ♥

**********************************************************/
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#define el "\n"
#define ll long long
#define cin(v) for(auto &i : v)cin>>i
#define cout(v) for(auto &i : v)cout<<i<<" "
#define S stack<int>
#define V vector<int>
#define P pair< ll ,ll>
#define Vp vector<P>
#define fast  ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;

V seive(ll n){
    
    vector <bool> sieve(n+1,true);
    V f(n+1);
    sieve[0]= false;
    sieve[1]= false;
    for(ll i = 2; i<=sieve.size() ; i++ )
    {
        if(sieve[i])
        {
            f[i]=i;
            for(ll j = 2*i; j<=sieve.size() ; j+=i )
            {
                sieve[j]=false;
                if(!f[j])f[j]=i;
            }
        }
    }
    return f;
}

void solve(){
    auto fac = seive(10000000);
    ll n,t;
    cin>>t;
    
    while(t--){
        cin>>n;
        map <int , int>freq;
        while(n>1){
            int p = fac[n];
            freq[p]++;
            n/=p;
        }
        int o = 0,e=0; 
        for (auto [k,v] : freq) {
            if(v%2)o++;
            else e++;
        }
        
        if(e>o){
            cout<<"Psycho Number\n"; 
        }else{
            cout<<"Ordinary Number\n";    
        }
     
    }
   
}


int main()
{
    fast
    solve();
    return 0;
}
