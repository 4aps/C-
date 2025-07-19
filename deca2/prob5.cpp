#include <iostream>
using namespace std;

//Leetcode Problem Number: 9-Palindrome Number[e]

int main(){
    int num, k, rem, ans = 0;
    cout << "Enter a number: ";
    cin >> num;

    if(num < 0)
    cout << "Not palindrome";
    
    k = num;
    while(k > 0){
        rem = k % 10;
        ans = ans * 10 + rem;
        k /= 10;
    }
    if(num == ans)
    cout << "Palindrome";
    else
    cout << "Not a palindrome"; 
}