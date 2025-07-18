#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int first = 0, second = 1, next;
    cout << a << " ";
    cout << b << " ";
    for(int i = 2; i < num; i++){
        next = first + second;
        cout << next << " ";
        first = second;
        second = next;
    }
}