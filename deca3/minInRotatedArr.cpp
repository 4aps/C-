#include <iostream>
#include <vector>
using namespace std;

int minInRotatedArr(vector<int> &arr){
    int mid, start=0, end=arr.size()-1, ans=0;

    if(arr[start]<arr[end] || end==0)
    return arr[start];

    while(start <= end){
        mid = start+(end-start)/2;
        if(arr[mid] >= arr[0])
        start = mid+1;
        else{
            ans = arr[mid];
            end = end-1;
        }
    }
    return ans;
}

int main(){
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements in array: ";
    for(int i = 0; i<n; i++)
    cin >> arr[i];

    cout << minInRotatedArr(arr);
    return 0;
}
