#include <iostream>
#include <cmath>
using namespace std;

//Armstrong Number[e]

int count_digit(int num){
    int count = 0;
    while(num != 0){
        num = num / 10;
        count++;
    }
    return count;
}

int armstrong_num(int num, int digit){
    int p = num, ans = 0, rem;

    while(p != 0){
        rem = p % 10;
        ans = pow(rem, digit) + ans;
        p /= 10;
    }

    if(num == ans)
    return ans;
    else 
    return 0;
}

int main(){
    int num, digit;
    cout << "Enter number: ";
    cin >> num;
    digit = count_digit(num);
    cout << armstrong_num(num, digit);
}