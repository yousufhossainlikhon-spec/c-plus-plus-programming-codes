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
    int maxSum=INT_MIN;
    cout <<"Subarray is"<<endl;
    for(int st=0; st<n; st++){
            int currSum=0;

        for(int end=st; end<n; end++){
             currSum+=arr[end];
             maxSum=max(currSum,maxSum);

        }
    }

    cout <<"Maximum Subarray sum is: "<<maxSum<<endl;

    return 0;
}