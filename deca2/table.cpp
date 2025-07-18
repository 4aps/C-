#include <iostream>
using namespace std;

int main(){
    int i, num1, num2, table;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    
    while(num1 <= num2){
        cout << "Table of " << num1 << endl;
        for(i = 1; i <= 10; i++){
            table = num1 * i;
            cout << table << " ";
        }
        num1++;
        cout << endl << endl;
    }
    
}