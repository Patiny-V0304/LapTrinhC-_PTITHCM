#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int T;
    cin >> T;

    while (T--){
        int row,col;
        cin >> row >> col;

        int A[row][col], B[row][col];
        for (int i = 0; i < row; i++){
            for (int j = 0; j < col; j++){
                cin >> A[i][j];
                B[i][j] = A[i][j];
            }
        }

        for (int i = 0; i < row; i++){
            for (int j = 0; j < col; j++){
                if (A[i][j] == 1){
                    for (int m = 0; m < col; m++) B[i][m] = 1;
                    for (int n = 0; n < row; n++) B[n][j] = 1;
                } 
            }
        }

        for (int i = 0; i < row; i++){
            for (int j = 0; j < col; j++){
                cout << B[i][j] << " ";
            }
            cout << endl;
        }
    }
}
//code toi uu:
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int T; // Số lượng bộ test
//     cin >> T;
    
//     while (T--) {
//         int N, M;
//         cin >> N >> M;
        
//         vector<vector<int>> A(N, vector<int>(M));
//         vector<int> row_flag(N, 0), col_flag(M, 0); // Mảng đánh dấu
        
//         // Nhập ma trận A
//         for (int i = 0; i < N; i++) {
//             for (int j = 0; j < M; j++) {
//                 cin >> A[i][j];
//                 if (A[i][j] == 1) {
//                     row_flag[i] = 1;
//                     col_flag[j] = 1;
//                 }
//             }
//         }
        
//         // Sửa đổi ma trận
//         for (int i = 0; i < N; i++) {
//             for (int j = 0; j < M; j++) {
//                 if (row_flag[i] == 1 || col_flag[j] == 1) {
//                     A[i][j] = 1;
//                 }
//             }
//         }
        
//         // In ra kết quả cho bộ test hiện tại
//         for (int i = 0; i < N; i++) {
//             for (int j = 0; j < M; j++) {
//                 cout << A[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }
    
//     return 0;
// }
