#include <iostream>
using namespace std;

int main(){
    int n, row, col;
    cout << "Enter the number: ";
    cin >> n;
    for(row = 0; row < n; row++){
        for(col = 5; col >= n-row; col--){
            cout << col << " ";
        }
        cout << endl;
    }
}