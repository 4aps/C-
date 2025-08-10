#include <iostream>
#include <vector>
using namespace std;


vector<int> twoSum(vector<int> arr, int target){
    int n = arr.size();
    int start = 0, end = n-1;

    while(start < end){
        if(arr[start] + arr[end] < target)
        start++;
        else if(arr[start] + arr[end] > target)
        end--;
        else
        return {start, end};
    }
    return {};
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

    vector<int> ans = twoSum(v, k);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i];
    }
}
