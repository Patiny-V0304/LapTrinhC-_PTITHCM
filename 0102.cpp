#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(-11); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--){
        char n;
        cin >> n;
        if (n >= 97 && n <= 122){
            cout << char(n - 32) << endl;
        }
        else cout << char(n + 32)<< endl;
    }
}