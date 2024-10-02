#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0); 
    cout.tie(0);

    int N; 
    cin >> N;
    long long sum = 0;

    for (int i = 1; i <= N; ++i) {
        long long factorial = 1;
        for (int j = 1; j <= i; ++j) {
            factorial *= j;
        }
        sum += factorial;
    }

    cout << sum << endl;
    return 0;
}