#include <iostream>
using namespace std;

//Leetcode Problem Number: 1009-Bitwise Complement of Base-10[e]

int bitwiseComplement(int n) {
    int m = n, drip = 0;

    if(n == 0)
        return 1;
    
    while(m != 0){
        drip = (drip << 1) | 1;
        m >>= 1;
    }
    return (~n) & drip;
}

int main(){
    int num, rem, i = 1, ans = 0;
    cout << "Enter a number: ";
    cin >> num;
    
    cout << bitwiseComplement(num);

    // if(num == 0)
    // return 1;

    // while(num){
    //     rem = num % 2;
    //     rem = rem ^ 1;
    //     ans = rem * i + ans;
    //     i *= 2;
    //     num /= 2;
    // }
    // cout << ans;
}