#include <iostream>
using namespace std;

//Bishop's Moves [e]

int find_min(int A, int B){
    if(A >= B)
    return B;
    else 
    return A;
}

int main(){
    int a, b, moves = 0;
    cout << "Enter bishop's position: ";
    cin >> a >> b;

    moves = find_min(8-a, 8-b) + find_min(8-a, b-1) + find_min(a-1, 8-b) + find_min(a-1, b-1);
    cout << moves;
}