#include <iostream>
#include <cmath>
using namespace std;

int cubeRoot(int n){

    if(n <= 0)
    return 0;
    
    int ans=1;
    double i = 1;

    while(i <= n/i){
        double k = n/i;
        if(k/i > i){
            ++i;
        }   
        else {
            if(k/i == i)
            ans = floor(i);
            else
            ans = floor(i-1);
            break;
        }
    }
    return ans;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Cube root of " << n << " is -> " << cubeRoot(n); 
}
