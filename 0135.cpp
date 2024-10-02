#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Hàm sàng nguyên tố
vector<int> sieve(int max) {
    vector<bool> is_prime(max + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= max; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= max; j += i) {
                is_prime[j] = false;
            }
        }
    }
    vector<int> primes;
    for (int i = 2; i <= max; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }
    return primes;
}

int main() {
    int T; // Số lượng bộ test
    cin >> T;
    
    // Tiền xử lý, tìm các số nguyên tố nhỏ hơn hoặc bằng sqrt(10^6)
    int maxN = 1e6;
    vector<int> primes = sieve(sqrt(maxN));
    
    while (T--) {
        int N;
        cin >> N;
        
        // In ra các số có đúng 3 ước số <= N
        for (int p : primes) {
            if (p * p > N) break; // Dừng lại nếu p^2 lớn hơn N
            cout << p * p << " ";
        }
        cout << endl;
    }
    
    return 0;
}
