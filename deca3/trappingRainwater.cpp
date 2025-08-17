#include <iostream>
#include <vector>
using namespace std;

int trapRainwater(vector<int> height) {
    int n = height.size();
    int trapped = 0;

    // Method->1

    // vector<int> leftMax(n, 0);
    // vector<int> rightMax(n, 0);

    // leftMax[0] = height[0];
    // rightMax[n-1] = height[n-1];  

    // for(int i = 1; i < n; i++){
    //     leftMax[i] = max(leftMax[i-1], height[i]);
    // }

    // for(int i = n-2; i >= 0; i--){
    //     rightMax[i] = max(rightMax[i+1], height[i]);
    // }

    
    // for(int i = 0; i < n; i++){
    //     trapped += min(leftMax[i], rightMax[i]) - height[i];
    // }

    // return trapped;

    // Method->2

    // if (n == 0) return 0;

    // int left = 0, right = n - 1;
    // int leftMax = 0, rightMax = 0;

    // while (left < right) {
    //     if (height[left] < height[right]) {
    //         if (height[left] >= leftMax)
    //             leftMax = height[left];
    //         else
    //             trapped += leftMax - height[left];
    //         left++;
    //     } else {
    //         if (height[right] >= rightMax)
    //             rightMax = height[right];
    //         else
    //             trapped += rightMax - height[right];
    //         right--;
    //     }
    // }
    // return trapped;

    
    
    // Method->2.O

    int left = 0, right = n - 1;
    int leftMax = 0, rightMax = 0;

    while(left < right){
        leftMax = max(leftMax, height[left]);
        rightMax = max(rightMax, height[right]);

        if(leftMax < rightMax){
            trapped += leftMax - height[left++];
        } else {
            trapped += rightMax - height[right--];
        }
    }
    return trapped;

}

int main() {
    int n;
    cout << "Enter the number of towers: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter height of " << n << " towers: ";
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int ans = trapRainwater(v);
    cout << ans;

    return 0;
}
