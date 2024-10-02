#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, s;
    cin >> m >> s;

    // Trường hợp đặc biệt: nếu s == 0 và m == 1, số duy nhất có thể là 0
    if (s == 0 && m == 1) {
        cout << "0 0";
        return 0;
    }

    // Nếu tổng quá lớn để có thể biểu diễn bằng m chữ số hoặc quá nhỏ
    if (s == 0 || s > 9 * m) {
        cout << "-1 -1";
        return 0;
    }

    // Tạo số nhỏ nhất
    string smallest(m, '0');
    int sum = s;
    
    // Bắt đầu xây dựng số nhỏ nhất từ chữ số cuối cùng
    for (int i = m - 1; i >= 0; i--) {
        if (sum > 9) {
            smallest[i] = '9';
            sum -= 9;
        } else {
            smallest[i] = '0' + sum;
            sum = 0;
        }
    }

    // Điều chỉnh chữ số đầu tiên nếu nó là 0 (vì không thể có số 0 đứng đầu)
    if (smallest[0] == '0') {
        smallest[0] = '1';
        for (int i = 1; i < m; i++) {
            if (smallest[i] != '0') {
                smallest[i] -= 1;
                break;
            }
        }
    }

    // Tạo số lớn nhất
    string largest(m, '0');
    sum = s;

    // Bắt đầu xây dựng số lớn nhất từ chữ số đầu tiên
    for (int i = 0; i < m; i++) {
        if (sum > 9) {
            largest[i] = '9';
            sum -= 9;
        } else {
            largest[i] = '0' + sum;
            sum = 0;
        }
    }

    cout << smallest << " " << largest;
    return 0;
}
