#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number to check prime or not: ";
    cin >> n;

    bool isPrime = true;

    if (n <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;    
            }
        }
    }

    if (isPrime) {
        cout << "The number is a Prime number" << endl;
    } else {
        cout << "The number is not a Prime number" << endl;
    }

    return 0;
}