#include <iostream>
#include <cmath> // using abs()
using namespace std;
long long sumOfDigits(long long n){
    n = abs(n); // negatime to positive 
    long long sum=0;
    while(n>0){
        long long lastDigits=n%10;
        n=n/10;
        sum+=lastDigits;
    }
    return sum;
}

int main(){
     long long n;
     cout <<"Enter Digits:";
     cin >> n;
     cout << sumOfDigits(n) <<endl;
    return 0;
}