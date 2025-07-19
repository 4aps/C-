#include <iostream>
using namespace std;

void insertionSort(int arr[], int size){
    int i, j, temp;

    //Method-1

    // for(i = 1; i < size; i++){
    //     for(j = i; j > 0; j--){
    //         if(arr[j] > arr[j-1]){
    //             temp = arr[j];
    //             arr[j] = arr[j-1];
    //             arr[j-1] = temp;
    //         }   
    //         else
    //         break;
    // }

    //Method-2

    for(i = size-1; i >= 0; i--){
        for(j = i; j < size;  j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            else
            break;
        }
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

    insertionSort(arr, size);

    return 0;
}