#include <iostream>
#include <vector>
using namespace std;

bool allocatePages(vector<int> arr, int k, int mid){
    int pageSum = 0, studentCount = 1;

    for(int i = 0; i < arr.size(); i++){
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }
        else{
            studentCount++;
            if(studentCount > k || arr[i] > mid)
                return false;
            pageSum = arr[i];
        }
    }
    return true;
}

int findPages(vector<int> arr, int k){
    int minPages=-1, sum=0, max=-1;
    int n = arr.size();

    if(k > n)
        return -1;

    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(arr[i] > max)
            max = arr[i];
    }
    
    if(k == n)
        return max;

    int start = max, end = sum;    
    while(start <= end){
        int mid = start+(end-start)/2;
        if(allocatePages(arr, k, mid)){
            minPages = mid;
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }

    return minPages;
}

int main(){
    int n, k;

    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements in array: ";
    for(int i = 0; i<n; i++)
    cin >> arr[i];

    cout << "Done . . ." << endl;

    cout << "Enter the number of students: ";
    cin >> k;

    cout << "Minimized maximum pages a student might get is: ";
    cout << findPages(arr, k);
    return 0;
}