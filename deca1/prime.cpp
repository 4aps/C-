#include <iostream>
using namespace std;

int main(){
    int num, count = 0;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 2; i < num; i++){
        if(num % i == 0){
            count++;
            break;
        }
    }
    if(count > 0){
        puts("Not a Prime Number");
    }
    else{
        puts("Prime Number");
    }
    return 0;
}