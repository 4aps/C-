#include <iostream>
using namespace std;


int fact(int num){
    if (num == 0 || num == 1) 
        return 1;
    else return num * fact(num-1);
}

int main(){
    cout << "Enter a number: ";
    int num;
    cin >> num;
    cout << fact(num);
    return 0;
}

