#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
    int cases;
    cin >> cases;

    while (cases--){
        ll array[100000];
        int N;
        cin >> N;
        for (int i = 0; i < N; i++){
            cin >> array[i];
        }
        sort(array,array + N);
        ll temp = array[1] - array[0];

        //So sanh cac phan tu lien tiep nhau
        for (int i = 1; i < N - 1; i++){
            if (array[i+1] - array[i] < temp){
                temp = array[i+1] - array[i];      //doi gia tri temp neu 2 so lien nhau co khoang cach nho hon
            }
        }
        cout << temp;
        cout << endl;
    }
}