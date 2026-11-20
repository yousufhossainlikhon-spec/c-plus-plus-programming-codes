#include <iostream>
using namespace std;
    int linearSearch(int arr[], int n, int target){
        for (int i=0; i<n; i++){
            if(arr[i] == target){
                return i;
            }
        }
        return -1;
    }
int main(){

    int i,n,target;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter value"<<endl;
    for(int i=0; i<n; i++){
        cout << "Index " << i <<" ";
        cin >> arr[i];
    }
    cout << "Enter Target value:";
    cin >> target;
    int result=linearSearch(arr,n,target);
if (result != -1) {
    cout << "Target value found at index " << result;
} else {
    cout << "Target value not found";
}
    return 0;
}