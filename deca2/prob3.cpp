#include <iostream>
using namespace std;

//Leetcode Problem Number: 231-Power of Two[e]

int main(){
    int num, rem, count = 0;
    cout << "Enter the number: ";
    cin >> num;

    if(num < 1 || num % 2 != 0)
    cout << "Not in powers of 2";
    else{
        while(num != 1){
            if(num % 2 == 1){
                cout << "Not in powers of 2";
                return 0;
            }
            num /= 2;
        }
        cout << "In powers of 2";
    }
}