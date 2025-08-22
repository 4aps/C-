#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector <int> nums){
    int sum = 0, maxSum = INT_MIN, i = 0, min = maxSum;

    while(i < nums.size()){
        min = max(min, nums[i]);
        if(sum + nums[i] > 0){
            sum += nums[i++];
            maxSum = max(maxSum, sum);
        }
        else{
            sum = 0;
            i++;
        }
    }
    return maxSum > min ? maxSum : min;
}

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter the " << n << " elements: ";
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int ans = maxSubArray(v);
    cout << ans;

    return 0;
}
