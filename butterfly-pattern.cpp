#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter any number start from 3...: ";
    cin >> n;
    for(int i = 0; i < n; i++) {
    for (int j = 0; j <=i; j++) {
        cout <<"* ";
    }
        for(int k=0; k < (4*n-4)-(i*4); k++){
            cout <<" ";
        }
        for(int l=0; l<=i; l++){
            cout << "* ";
        }
        cout << endl;
}
for(int i=0; i<n-1; i++){
    for(int j=0; j<n-1-i; j++){
        cout <<"* ";
    }
        for(int k=0; k < 4*i+4; k++){
            cout <<" ";
        }
        for(int l=0; l< n-i-1; l++){
            cout <<"* ";
        }
    cout << endl;
}
    return 0;
}