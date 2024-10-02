#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int cases;
    cin >> cases;
    
    while (cases--){
        int T;
        cin >> T;
        
        vector<int> A(T);
        for (int i = 0; i < T; i++){
            cin >> A[i];
        }

        //Tao mang danh dau so duong
        vector<bool> newA(1e6 + 1, false);

        //Danh dau cac so chua xuat hien
        for (int i = 0; i < T; i++){
            if (A[i] > 0 && A[i] <= 1e6){
                newA[A[i]] = true;
            }
        }

        int minInt = 1;
        while (minInt <= 1e6 && newA[minInt]){
            minInt++;
        }

        cout << minInt;
        cout << endl;
    }
}