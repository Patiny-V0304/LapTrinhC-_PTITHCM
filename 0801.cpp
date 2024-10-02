#include <iostream>
#include <fstream>

using namespace std;
int main(){
    ifstream ip;
    ofstream op;
    
    // Mở tệp với tên đúng
    ip.open("PTIT.in");
    op.open("PTIT.out");

    // Kiểm tra xem tệp có mở thành công không
    if (!ip.is_open() || !op.is_open()) {
        cerr << "Lỗi mở tệp!" << endl;
        return 1;
    }

    string line;
    
    // Đọc từng dòng và ghi vào tệp đầu ra
    while (getline(ip, line)) {
        op << line << endl;
    }

    // Đóng tệp sau khi xử lý xong
    ip.close();
    op.close();

    return 0;
}
