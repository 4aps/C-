#include <iostream>
using namespace std;

int main(){
    int n, row, col;
    cout << "Enter the number of rows: ";
    cin >> n;
    for(row = 0; row < n; row++){
        for(col = 0; col < n ; col++){
            if(row + col >=  n-1){
                cout << "*" << " ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}