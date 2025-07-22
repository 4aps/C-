#include <iostream>
#include <vector>
using namespace std;

int countZeroes(vector<int> &arr){
    int count; 
    for(int i=0; i<arr.size(); i++){
        if(arr[i] == false)
        count++;
    }
    return count;
}

int main(){
    int n;

    cout << "Enter the size: ";
    cin >> n;

    vector <int> arr(n);
    cout << "Enter " << n << " elements: ";
    for(int i=0; i<n; i++)
    cin >> arr[i];

    cout << "Number  of zeroes: " << countZeroes(arr);

    return 0;
}
