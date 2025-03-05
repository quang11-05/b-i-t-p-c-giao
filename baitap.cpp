#include <iostream>
using namespace std;

int main() {
    int N;
    
    cout << "Nhap N (N >= 10): ";
    cin >> N;

    if (N < 10) {
        cout << "N ph?i l?n hon ho?c b?ng 10!" << endl;
        return 1;  // Tho�t chuong tr�nh n?u N < 10
    }

    int sum = 0;

    for (int i = 1; i <= N; ++i) {
        sum += i * 11;  // C?ng th�m i * 11 v�o t?ng
    }

    cout << "Tong S = " << sum << endl;

    return 0;
}
