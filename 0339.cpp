// #include <iostream>
// #include <string>

// using namespace std;

// int main(){
//     int T; 
//     cin >> T;
//     cin.ignore();
//     while (T--){
//         string s;
//         getline(cin,s);

//         int dem = 0;
//         s += '0';
//         for (int i = 0; i < s.size()-1; i++){
//             char tempt = s[i];
//             for (int j = i + 1; j < s.size();j++ ){
//                 if (tempt == s[j]) dem++;
//             }
//         }
//         cout << dem + s.size() - 1  << endl;
//     }
// }

// cach 2:
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int T; 
    cin >> T;
    cin.ignore();
    while (T--) {
        string s;
        getline(cin, s);

        // Mảng đếm số lần xuất hiện của mỗi ký tự
        vector<int> freq(26, 0);

        // Đếm số lần xuất hiện của mỗi ký tự trong xâu
        for (char c : s) {
            freq[c - 'a']++;
        }

        int result = 0;
        // Tính tổng số xâu con cho mỗi ký tự
        for (int count : freq) {
            if (count > 0) {
                result += count;  // Các xâu con có độ dài 1
                result += (count * (count - 1)) / 2;  // Các xâu con có độ dài > 1
            }
        }

        cout << result << endl;
    }
    return 0;
}

