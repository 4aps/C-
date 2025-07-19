#include <iostream>
using namespace std;

void reverse(int arr[], int l){
    int temp_arr[10], i, j;
    for(i = l-1, j = 0; i >= 0, j < l; i--, j++){
        temp_arr[j] = arr[i];
    }
    i = 0;
    while(i < l){
        arr[i] = temp_arr[i];
        i++;
    }

    cout << "Reversed Array: ";
    for(i = 0; i < l; i++)
    cout << arr[i] << " ";
    cout << endl;
}


void reverse_eff(int arr[], int l){
    int temp = 0, i = 0, j = l-1;
    while(i <= j){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    cout << "Reversed Array: ";
    for(i = 0; i < l; i++)
    cout << arr[i] << " ";
}

int main(){
    int size, arr[10], i;
    cout << "Enter size of array: ";
    cin >> size;

    cout << "Enter " << size << " element in array: ";
    for(i = 0; i < size; i++)
    cin >> arr[i];
    cout << "Done..." << endl;

    
    cout << "Normal Array: ";
    for(i = 0; i < size; i++)
    cout << arr[i] << " ";
    cout << endl;

    // reverse(arr, size);

    reverse_eff(arr, size);
    return 0;
}
