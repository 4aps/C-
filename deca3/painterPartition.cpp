#include <iostream>
#include <vector>
using namespace std;

bool isPainterAvailable(vector<int> arr, int k, int mid){
    int timeToPaint = 0, painterCount=1;

    for(int i = 0; i < arr.size(); i++){
        if(timeToPaint + arr[i] <= mid){
            timeToPaint += arr[i];
        }
        else{
            painterCount++;
            if(painterCount > k || arr[i] > mid)
                return false;
            timeToPaint = arr[i];
        }
    }    

    return true;
}


int findTime(vector<int> arr, int k){
    int n = arr.size(), minTime=-1;
    int start, end, sum=0, max=-1;

    for(int i=0; i < n; i++){
        sum+=arr[i];
        if(arr[i]>max)
            max=arr[i];
    }

    if(n == k)
        return max;
        
    start = max, end = sum;

    while(start <= end){
        int mid = start+(end-start)/2;
        if(isPainterAvailable(arr, k, mid)){
            minTime = mid;
            end = mid-1;
        }
        else
            start = mid+1;
    }
    return minTime;
}


int main(){
    int n, k;

    cout << "Enter the number of boards: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the paint time for each of " << n << " boards in order: ";
    for(int i = 0; i<n; i++)
    cin >> arr[i];

    cout << "Done . . ." << endl;

    cout << "Enter the number of painters: ";
    cin >> k;

    cout << "Minimum time that will be required to finish the job: ";
    cout << findTime(arr, k);
    return 0;
}