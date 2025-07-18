#include <iostream>
using namespace std;

int returnIndex(int arr[], int size, int target){
    int mid, start = 0, end = size-1, index = size;
    
    while(start <= end){
        mid = start+(end-start)/2;
        if(target == arr[mid])
            return mid;
        else if(target < arr[mid]){
            index = mid;
            end = mid-1;
        }
        else            
            start = mid+1;
    }
    
    return index;
}

int main(){
    int arr[100], size, i, target;
    cout << "Enter the size: ";
    cin >> size;

    cout << "Enter " << size << " elements in ascending order: ";
    for(i = 0; i < size; i++)
    cin >> arr[i];
    cout << "Done..." << endl;

    cout << "Enter target value: ";
    cin >> target;

    cout << returnIndex(arr, size, target);
    return 0;
}
