#include <iostream>
using namespace std;

int main() {
    int N;
    
    cout << "Nhap N (N >= 10): ";
    cin >> N;

    if (N < 10) {
        cout << "N ph?i l?n hon ho?c b?ng 10!" << endl;
        return 1; 
    }

    int sum = 0;

    for (int i = 1; i <= N; ++i) {
        sum += i * 11;
    }

    cout << "Tong S = " << sum << endl;

    return 0;
}
