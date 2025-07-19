#include <iostream>
using namespace std;

//LC Problem: 1539. Kth Missing Positive Number

int findKthPositive(int arr[], int size, int k){
    int last = arr[size-1], i = 1, j = 0;

    //Approach 1 and approach 2 in deca 4 findMiss

    while(i <= last){
        if(i != arr[j]){
            k--;
            if(k==0)
            return i;
            j--;
        }
        i++;
        j++;
    }
    return i-1+k;

}

int main(){

    int arr[100], size, i, k;
    cout << "Enter the size: ";
    cin >> size;

    cout << "Enter " << size << " elements in ascending order: ";
    for(i = 0; i < size; i++)
    cin >> arr[i];
    cout << "Done..." << endl;

    cout << "Enter target missing value: ";
    cin >> k;

    cout << findKthPositive(arr, size, k);
    return 0;
}
