#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();

    vector<pair<int,int>> arr;
    for (int i = 0; i < n; i++) {
        arr.push_back({nums[i], i});
    }

    sort(arr.begin(), arr.end());

    int start = 0, end = n-1;
    while(start < end){
        int sum = arr[start].first + arr[end].first;

        if(sum == target){
            return {arr[start].second, arr[end].second};
        }
        else if(sum < target){
            start++;
        }
        else{
            end--;
        }
    }
    return {-1, -1};  
}

int main() {
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

    vector<int> ans = twoSum(v, k);
    if(ans[0] == -1) {
        cout << "No pair found";
    } else {
        cout << "Indices: " << ans[0] << " " << ans[1];
    }
}

