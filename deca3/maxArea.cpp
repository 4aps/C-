#include<iostream>
#include<vector>
using namespace std;

int maxArea(vector<int> height){
    int left = 0, right = height.size()-1;
    int maxArea = 0;

    while(left < right){
        int minHeight = (height[left] < height[right]) ? height[left] : height[right];
        int width = right-left;
        int ans = minHeight * width;
        maxArea = (ans > maxArea) ? ans : maxArea;
        if(height[left] <= height[right])
            left++;
        else
            right--;
    }
    return maxArea;
}

int main(){
    int n;
    cout << "Enter the number of towers: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter height of " << n << " towers: ";
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int ans = maxArea(v);
    cout << ans;
}
