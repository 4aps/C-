#include <iostream>
using namespace std;

int main(){
    int n, col;
    cout << "Enter row: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int col = i; col > 0; col--){
            cout << col << " ";
        }
       cout << endl;
    }
}
