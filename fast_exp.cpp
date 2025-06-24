#include <iostream>
using namespace std;

int main() {
    long long x, n, m;
    cout << "Enter base (x): ";
    cin >> x;
    cout << "Enter exponent (n): ";
    cin >> n;
    cout << "Enter modulus (m): ";
    cin >> m;

    long long res = 1;
    while (n > 0) {
        if (n & 1) { // If n is odd
            res = (x %m* res%m) % m;
        }
        x = (x * x) % m; // Square the base
        n = n >> 1; // Divide n by 2
    }

    cout << "Result: " << res << endl;
    return 0;
}
