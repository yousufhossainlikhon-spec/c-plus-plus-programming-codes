#include <iostream>
using namespace std;
long long factOfN(int n){
    if(n==0 || n==1){
        return 1;
    }
       return n*factOfN(n-1);
    }

int main(){
    int n,r;
    long long N,R,Z;
    double divide;
    cout <<"Enter value of n and r:";
    cin >> n >> r;
    N=factOfN(n);
    R=factOfN(r);
    Z=factOfN(n-r);
    divide=(double)N / (R*Z);

     cout << divide <<endl;
    return 0;
}