#include <iostream>
using namespace std;

typedef long long ll;

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main(){
    ll a,b,c,d;
    cin >> a >> b >> c >> d;

    ll tu,mau;
    tu = a*d+b*c;
    mau = b*d;

    
    while (gcd(tu,mau) != 1){
        ll k = gcd(tu,mau);
        tu = tu / k;
        mau = mau / k;
    }
    cout << tu << "/" << mau;
}