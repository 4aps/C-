#include <iostream>
using namespace std;

//Leetcode Problem Number: 258-Add Digits[e]

int main(){
    int num, rem, ans = 0;
    cout << "Enter a number: ";
    cin >> num;

    while(num > 0){
        rem = num % 10;
        ans = ans + rem;
        num = num / 10;
        if(ans > 9){
            ans = ans % 10 + 1;
        }
    }

    cout << ans << endl;
}