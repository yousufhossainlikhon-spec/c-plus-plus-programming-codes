#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int num=1;
    for(int j = 1; j <= n; ++j) {
    for (int i = 1; i <= n; ++i) {
        cout << num <<" ";
        num++;

    }
    cout << endl;
}
    return 0;
}
