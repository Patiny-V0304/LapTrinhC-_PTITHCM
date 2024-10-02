#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(-11); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--){
        long long n,res=0;
        cin >> n;
        res = n*(n+1)/2;
        cout << res << endl;
    }
}