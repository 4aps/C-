#include <iostream>
#include <vector>
using namespace std;

int splitArray(vector <int> arr, int k){
    int sum = 0, n = arr.size(), maxVal = -1, ans = -1;

    for(int i = 0; i < n; i++){
        sum += arr[i];
        maxVal = max(maxVal, arr[i]);
    }

    if(n == k)
        return maxVal;

    int start = maxVal, end = sum;

    while(start <= end){
        int mid = start+(end-start)/2;

        int arrSum = 0, subArrayCount = 1;

        for(int i = 0; i < n; i++){
            arrSum += arr[i];
            if(arrSum > mid){
                subArrayCount++;
                arrSum = arr[i];
            }
        }
        if(subArrayCount > k){
            start = mid+1;
        }
        else{
            ans = mid;
            end = mid-1; 
        }
    }
    return ans;
}

int main(){
    int n, k;

    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements in array(contagious): ";
    for(int i = 0; i<n; i++)
    cin >> arr[i];

    cout << "Done . . ." << endl;

    cout << "Enter the number of subArrays: ";
    cin >> k;

    cout << "Minimum possible sum for "<< k <<" split subarray is: ";
    cout << splitArray(arr, k);
    return 0;
}
