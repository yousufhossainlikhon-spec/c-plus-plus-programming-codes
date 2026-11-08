#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    
    vector<int> vec(n); 
    
    cout << "Enter " << n << " numbers: \n";
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    vec.push_back(99); //increase vector size 1 and assign value 99
    cout <<"After push_back Vector Size:"<< vec.size()<<endl;
    vec.pop_back(); //remove last element of a vactor
    cout <<" After pop_back Vector Size:"<< vec.size()<<endl;
    cout << "First element of a vector "<< vec.front()<<endl;
    cout <<"Last element of a vector :"<<vec.back()<<endl;
    cout <<"Value of index 2 is: "<<vec.at(2) <<endl; //value of index 2
    vec.at(3)=33; //assign value 33 in index 3
    cout << "Your vector elements: ";
    for(int val : vec) {
        cout << val << " ";
    }
    
    return 0;
}