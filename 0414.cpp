#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){
    int T;
    cin >> T;

    while (T--){
        int n;
        cin >> n;
        
        string s;
        
        while (n--){
            int tempt;
            cin >> tempt;
            s = s + to_string(tempt);
        }

        set<int> st;

        for (int i = 0; i < s.size(); i++){
            int k = s[i] - '0';
            st.insert(k);
        }
        for (auto it : st){
            cout << it << " ";
        }
        cout << endl;
    }
}

//code toi uu
// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;

// int main() {
//     int T;
//     cin >> T;

//     while (T--) {
//         int n;
//         cin >> n;

//         // Mảng tần suất để đếm các chữ số từ 0 đến 9
//         vector<int> freq(10, 0);

//         // Xử lý từng số trong mảng A
//         for (int i = 0; i < n; i++) {
//             long long tempt;
//             cin >> tempt;

//             // Tách từng chữ số của số hiện tại
//             while (tempt > 0) {
//                 int digit = tempt % 10;
//                 freq[digit]++;
//                 tempt /= 10;
//             }
//         }

//         // In ra các chữ số duy nhất theo thứ tự tăng dần
//         for (int i = 0; i < 10; i++) {
//             if (freq[i] > 0) {
//                 cout << i << " ";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }

