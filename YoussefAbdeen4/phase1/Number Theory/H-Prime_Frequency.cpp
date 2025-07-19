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
#define V vector<bool>
#define P pair< ll ,ll>
#define Vp vector<P>
#define fast  ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;

vector <bool> seive(int n){
    
    V isPrime(n+1,true);
    isPrime[0]=isPrime[1]=false;
    for (int i = 2; i <= n; i++) {
        if(isPrime[i]){
            for (int j = i*2; j <=n; j+=i) {
                isPrime[j]=false;
            }
        }
    }
  
    return isPrime;
}

void solve() {
   auto arr = seive(2000);
   int q;cin>>q;
   int cnt=0;
   while(cnt++<q){
      set<char> st;
      int f[128]={0};
      string s;cin>>s;
      for (auto i : s) {
          f[(int)i]++;
      }
      int flag=0;
       for (auto i : s) {
          if(arr[f[(int)i]]){
             st.insert(i);
              flag=1;
          }
      }
     cout<<"Case "<<cnt<<": ";
     for (auto i : st) {
         cout<<i;
     }
     if(!flag)cout<<"empty";
     cout<<"\n";
   }
   
}
void testCases(){

    int t=1;
    //cin>>t;
    while (t--){
        solve();
    }
}
int main() {
    fast
    testCases();
    return 0;
}