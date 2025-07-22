#include <iostream>
#include <vector>
using namespace std;

int countTargetOccurrence(vector<int> &arr, int target){
    
    // First-Occurrence
    int n=arr.size(), start=0, end=n-1;
    int first=-1;
    while(start <= end){
        int mid=start+(end-start);
        if(arr[mid] == target){
            first = mid;
            end = mid-1;
        }
        else if(arr[mid] > target)
        end = mid-1;
        else
        start = mid+1;
    }
    if(first == -1)
    return 0;

    // Last-Occurrence
    start=-1, end=n-1;
    int last=-1;
    while(start <= end){
        int mid=start+(end-start);
        if(arr[mid] == target){
            last = mid;
            start = mid+1;
        }
        else if(arr[mid] > target)
        end = mid-1;
        else
        start = mid+1;
    }
    if(first-last == 0)
    return 1;
    else
    return last-first+1;
}

int main(){
    int n, target;

    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements in array: ";
    for(int i = 0; i<n; i++)
    cin >> arr[i];

    cout << "Enter the target: ";
    cin >> target;

    cout << "The occurrence of number " << target << " is -> " << countTargetOccurrence(arr, target) << " times";
    return 0;
}
