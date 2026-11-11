//SubArray Sum
#include <iostream>
#include <algorithm>
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

    int currentSum = arr[0];
    int maxSum = arr[0];

    for (int i = 1; i < n; i++) {

        currentSum = max(arr[i], currentSum + arr[i]);

        maxSum = max(maxSum, currentSum);
    }

    cout << "Maximum Subarray Sum: " << maxSum;

    return 0;
}
