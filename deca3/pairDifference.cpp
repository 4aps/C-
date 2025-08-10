#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int pairDifference(vector<int> arr, int target){
    int n = arr.size();

    sort(arr.begin(), arr.end());
    int start = 0, end = 1;

    if(target < 0)
        target *= -1;

    while(end < n){
        if(arr[end] - arr[start] == target)
            return 1;
        else if(arr[end] - arr[start] < target)
            end++;
        else
            start++;

        if(start == end)
            end++;
    }
    return 0;
}

int main(){

    int n;
    cout << "Enter the size: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    int k;
    cout << "Enter the target: ";
    cin >> k;

    int ans = pairDifference(v, k);
    cout << ans;
}
