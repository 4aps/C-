#include <iostream>
using namespace std;

int search(int array[], int l, int target){
    int i;
    for(i = 0; i <= l; i++){
        if(target == array[i])
        return i;
    }
    return -1;
}

int main(){
    int size, arr[10], i,  target;
    cout << "Enter size of array: ";
    cin >> size;

    cout << "Enter " << size << " element in array: ";
    for(i = 0; i < size; i++)
    cin >> arr[i];
    cout << "Done..." << endl;

    cout << "Enter target element: ";
    cin >> target;

    cout << "Target element is at index: " << search(arr, size, target) << endl;
}
