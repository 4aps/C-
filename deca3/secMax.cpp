#include <iostream>
using namespace std;

int secMax(int arr[], int size){
    int i, max = INT_MIN, secMax = INT_MIN;
    for(; i < size; i++){
        if(arr[i] > max){
            secMax = max;
            max = arr[i];
        }
    }
    return secMax;
}

int main(){
    int size, arr[10], i;
    cout << "Enter size of array: ";
    cin >> size;

    cout << "Enter " << size << " element in array: ";
    for(i = 0; i < size; i++)
    cin >> arr[i];
    cout << "Done..." << endl;

    if(size <= 1)
    return -1;
    else
    cout << "Second maximum element is: " <<secMax(arr, size);
    
}