#include <iostream>
#include <map>
using namespace std;

int main(){
    int T;
    cin >> T;
    while (T--){
        map<int,int> mp;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++){
            int tempt;
            cin >> tempt;
            mp[tempt]++;
        }
        int dem = 0;
        for (auto &i : mp){
            if (i.second > 1) dem += i.second;
        }
        cout << dem << endl;
    }
}