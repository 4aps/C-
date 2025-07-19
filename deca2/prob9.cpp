#include <iostream>
using namespace std;

//Leetcode Problem Number: 172-Factorial Trailing Zeroes[m]

int trail_zero(int num){
    int count = 0, rem;
    while(num >= 5){
        rem = num /5;
        count += rem;
        num = rem;
    }
    return count;
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Trailing Zeroes: " << trail_zero(num);
}