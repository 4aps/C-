#include <iostream>
using namespace std;

int returnRoot(int squaredNum){
    if(squaredNum < 2)
    return squaredNum;
    int start = 0, end = squaredNum, ans;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(mid==squaredNum/mid)
        return mid;
        else if(mid < squaredNum/mid){
            ans = mid;
            start = mid+1;
        }
        else
        end = mid-1;
    }
    return ans;
}

int main(){
    int targetNum;
    cout << "Enter target value: ";
    cin >> targetNum;
    cout << returnRoot(targetNum);
    return 0; 
}
