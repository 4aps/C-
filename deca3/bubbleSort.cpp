#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size){
    int i, j, temp;
    bool swapped;

    for(i = 0; i < size-1; i++){
        swapped = 0;
        for(j = 0; j < size-i-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
            }
        }
        if(!swapped)
        break;
    }
    
    cout << "Sorted Array: ";
    for(i = 0; i < size; i++)
    cout << arr[i] << " ";
}

int main(){
    int arr[100], size, i;
    cout << "Enter the size: ";
    cin >> size;

    cout << "Enter " << size << " element in array: ";
    for(i = 0; i < size; i++)
    cin >> arr[i];
    cout << "Done..." << endl;

    cout << "Normal Array: ";
    for(i = 0; i < size; i++)
    cout << arr[i] << " ";
    cout << endl;

    bubbleSort(arr, size);
}