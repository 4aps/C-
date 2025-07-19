#include <iostream>
using namespace std;

int main(){
    int row, col, n, k = 1;
    cout << "Enter number of rows: ";
    cin >> n;
    for(row = 0; row < n; row++){
        for(col = 0; col < n; col++){
            cout << (row)*n + col+1 << " ";
        }
        cout<<endl;
    }
}