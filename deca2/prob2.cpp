#include <iostream>
using namespace std;

//Leetcode Problem Number: 7-Reverse Integer[m]

int main(){
    long long int num, rev = 0;
    int rem;
    cout << "Enter any number: ";
    cin >> num;

    while(num){
        rem = num % 10;
        if((rev > INT_MAX/10) || (rev < INT_MIN/10))
        return 0;
        rev = rev * 10 + rem;
        num /= 10; 
    }
    cout << rev;
    return rev;
}