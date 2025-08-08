#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxDistance(vector <int> position, int balls){
    int n = position.size();
    int start = 1, end, mid, ans;

    sort(position.begin(), position.end());

    end = position[n-1] - position[0];

    while(start <= end){
        mid = start+(end-start)/2;
        int count = 1, lastPosition = position[0];
        for(int i = 1;  i < n; i++){
            if(position[i] >= mid + lastPosition){
                count++;
                lastPosition = position[i];
            }
        }
        if(count >= balls){
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
    int n, m;

    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " position in array: ";
    for(int i = 0; i<n; i++)
    cin >> arr[i];

    cout << "Done . . ." << endl;

    cout << "Enter the number of balls: ";
    cin >> m;

    cout << "Minimized maximum distance bw balls is: ";
    cout << maxDistance(arr, m);
    return 0;        
}
