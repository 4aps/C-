#include <iostream>
#include <vector>
using namespace std;

int searchIdx(vector<int> &arr, int target){
    int ansIndex = -1, start=0, end = arr.size()-1;

    while(start <= end){
        int mid=start+(end-start)/2;
        if(arr[mid] == target){
            return mid;
        } 
        else if(arr[0] <= arr[mid]){
            if(target <= arr[mid] && target >= arr[start]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        else{
             if(target >= arr[mid] && target <= arr[end]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }
    return ansIndex;
}

int main(){
    int n, target;

    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements in array: ";
    for(int i = 0; i<n; i++)
    cin >> arr[i];

    cout << "Enter the target element: ";
    cin >> target;

    cout << searchIdx(arr, target);
    return 0;
}
