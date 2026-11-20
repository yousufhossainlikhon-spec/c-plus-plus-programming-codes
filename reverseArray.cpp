#include <iostream>
using namespace std;
    void reverseArray(int arr[], int n){
        int start=0;
        int end=n-1;
        while (start<=end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
        
    }
int main(){

    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter value"<<endl;
    for(int i=0; i<n; i++){
        cout << "Index " << i <<" ";
        cin >> arr[i];
    }
    reverseArray(arr,n);
    cout <<"Reverse Array " <<endl;
        for(int i=0; i<n; i++){
        cout << "Index " << i <<"= " <<arr[i] <<endl;
    }


    return 0;
}