#include <iostream>
using namespace std;

// Return capital letter[e]

char capital_char(char c){
    return c - 'a' + 'A';
}

int main(){
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    cout << capital_char(ch);
}