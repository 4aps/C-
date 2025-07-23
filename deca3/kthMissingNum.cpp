#include <iostream>
#include <vector>
using namespace std;

int kthMissingNum(vector<int> & arr, int k){
    int ans, start=0, end=arr.size()-1;

    while(start <= end){
        int mid = start+(end-start)/2;
        if(arr[mid]-mid-1 >= k){
            ans = mid;
            end = mid-1;
        }
        else
            start = mid+1;
    }
    return ans+k;
}

int main(){
    int n, k;

    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements in array: ";
    for(int i = 0; i<n; i++)
    cin >> arr[i];

    cout << "Enter the kth place: ";
    cin >> k;

    cout << kthMissingNum(arr, k);
    return 0;
}
