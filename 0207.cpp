#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int T;
    cin >> T;

    while (T--){
        int n, d;
        cin >> n >> d;
        vector<int> A(n);

        for (int i = 0; i < n; i++){
            cin >> A[i];
        }

        d = d % n;
        for (int i = d; i < n; i++){
            cout << A[i] << " ";
        }
        for (int i = 0; i < d; i++){
            cout << A[i] << " ";
        }
        cout << endl;
    }
}