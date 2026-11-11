#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"Enter array size: ";
    cin >>n;
    int arr[n];
    cout <<"Enter array elements:"<<endl;
    for(int i=0; i<n; i++){
        cout <<"index["<<i<<"]=";
        cin >>arr[i];
    }
    cout <<"Subarray is"<<endl;
    for(int st=0; st<n; st++){
        for(int end=st; end<n; end++){
            for(int i=st; i<=end; i++){
                cout <<arr[i];

            }
            cout <<" ";
        }
        cout<<endl;
    }
    return 0;
}