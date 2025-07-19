#include <iostream>
using namespace std;

//Leetcode Problem Number: 69-Sqrt(x)[e]

int main(){
    int num;
    long long i = 0, k = 0;
    cout << "Enter the number: ";
    cin >> num;

    if(num < 0){
        cout << "None";
        return 0;
    }
    while(k <= num){
        i++;
        k = i * i;
    }
    cout << i-1;
}