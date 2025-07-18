#include <iostream>
using namespace std;

int find_min(int array[], int size){
    int ans = INT_MAX, i;
    for(i = 0;  i < size; i++){
        if(ans > array[i])
        ans = array[i];
    }
    return ans;
}

int find_max(int array[], int size){
    int ans = INT_MIN, i;
    for(i = 0;  i < size; i++){
        if(ans < array[i])
        ans = array[i];
    }
    return ans;
}

int main(){
    int size, arr[10], i;
    cout << "Enter size of array: ";
    cin >> size;

    cout << "Enter " << size << " element in array: ";
    for(i = 0; i < size; i++)
    cin >> arr[i];
    
    cout << "Minimum element is : " << find_min(arr, size) << endl;
    cout << "Maximum element is : " << find_max(arr, size) << endl;
}
