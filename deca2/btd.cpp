#include <iostream>
using namespace std;

int main(){
    int n, dec = 0, rem, i = 1, oct = 0;
    cout << "Enter a number: ";
    cin >> n;

    while(n){
        rem = n % 10;
        dec = rem * i + dec;
        n /= 10;
        i *= 2;
    }
    cout << "Decimal number: " << dec << endl;
    i = 1;
    while(dec ){
        rem = dec % 8;
        oct = rem * i + oct;
        dec /= 10;
        i *= 10;
    }
    cout << "Octal number: " << oct << endl;
}