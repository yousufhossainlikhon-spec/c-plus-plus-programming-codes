#include <iostream>
using namespace std;

int main() {
    int n;
    char ch = 'A';
    cout << "Enter a number: ";
    cin >> n;

    for (int j = 1; j <= n; ++j) {
        for (int i = 1; i <= n; ++i) {
            cout << ch << " ";
            ch++;
            if (ch > 'Z') {
                ch = 'A';
            }
        }
        cout << endl;
    }

    return 0;
}