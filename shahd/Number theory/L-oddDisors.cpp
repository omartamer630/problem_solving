#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;

        while(n % 2 == 0) {
            n /= 2;
        }

        if(n > 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
