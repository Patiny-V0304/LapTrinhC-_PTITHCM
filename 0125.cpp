#include <iostream>
#include <cmath>

using namespace std;
typedef long long ll;

bool is_prime(ll num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (ll i = 5; i <= sqrt(num); i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

int main(){
    ll start, end;
    cin >> start >> end;
    if (start > end) swap(start,end);
    for (ll i = start;i<=end;i++){
        if (is_prime(i)){
            cout << i << " ";
        }
    }

}