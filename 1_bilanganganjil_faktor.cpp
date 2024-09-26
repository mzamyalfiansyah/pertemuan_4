#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int batas;
    cout << "Masukkan batas bilangan: ";
    cin >> batas;

    cout << "Bilangan ganjil: ";
    for (int i = 1; i <= batas; i++) {
        if (i % 2 != 0) cout << i << " ";
    }

    cout << "\nBilangan genap: ";
    for (int i = 1; i <= batas; i++) {
        if (i % 2 == 0) cout << i << " ";
    }

    cout << "\nBilangan prima: ";
    for (int i = 1; i <= batas; i++) {
        if (isPrime(i)) cout << i << " ";
    }

    cout << endl;
    return 0;
}
