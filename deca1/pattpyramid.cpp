#include <iostream>
using namespace std;

int main(){
    int n, row, col;
    cout << "Enter the number of rows: ";
    cin >> n;
    for(row = 0; row < n; row++){
        for(col = 0; col < n-row-1; col++){
            cout << "  ";
        }
        for(col = 0; col <= 2*row; col++){
            cout << "* ";
        }
        cout << endl;
    }
}