#include <iostream>
using namespace std;

int main(){
    int num, rem, bin = 0, mul = 1;
    cout << "Enter a  number: ";
    cin >> num;
    
    while(num > 0){
        rem = num % 8;
        bin = rem * mul + bin;
        num /= 8;
        // num = num >> 1;
        mul *= 10;
    }
    cout << "Binary Num: " << bin;
}