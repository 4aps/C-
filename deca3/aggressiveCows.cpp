#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int aggressiveCows(vector <int> stalls, int cows){
    int n = stalls.size();
    int start = 1, end, mid, ans;

    sort(stalls.begin(), stalls.end());

    end = stalls[n-1] - stalls[0];

    while(start <= end){
        mid = start+(end-start)/2;
        int count = 1, lastPosition = stalls[0];
        for(int i = 1;  i < n; i++){
            if(stalls[i] >= mid + lastPosition){
                count++;
                lastPosition = stalls[i];
            }
        }
        if(count >= cows){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}


int main(){
    int n, k;

    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " stalls in array: ";
    for(int i = 0; i<n; i++)
    cin >> arr[i];

    cout << "Done . . ." << endl;

    cout << "Enter the number of cows: ";
    cin >> k;

    cout << "Minimized maximum distance bw cows is: ";
    cout << aggressiveCows(arr, k);
    return 0;        
}
