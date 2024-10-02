#include <iostream>
#include <vector>

using namespace std;

bool isBalanced(int num) {
    int evenDigits = 0, oddDigits = 0;
    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0) evenDigits++;
        else oddDigits++;
        num /= 10;
    }
    return evenDigits == oddDigits;
}

int main() {
    int N;
    cin >> N;
    
    int lowerLimit = 1;
    for (int i = 1; i < N; i++) {
        lowerLimit *= 10;
    }
    
    int upperLimit = lowerLimit * 10 - 1;
    
    vector<int> balancedNumbers;

    for (int i = lowerLimit; i <= upperLimit; i++) {
        if (isBalanced(i)) {
            balancedNumbers.push_back(i);
        }
    }

    for (int i = 0; i < balancedNumbers.size(); i++) {
        cout << balancedNumbers[i] << " ";
        if ((i + 1) % 10 == 0) cout << endl;
    }

    return 0;
}
