#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool productPair(vector<int> arr, long long target){
    int n = arr.size();

    sort(arr.begin(), arr.end());
    int start = 0, end = n-1;

    while(start < end){
        long long prod = 1LL * arr[start] * arr[end];
        if(prod == target)
            return true;
        else if(prod < target)
            start++;
        else
            end--;
    }
    return false;
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

    long long k;
    cout << "Enter the target: ";
    cin >> k;

    bool ans = productPair(v, k);
    cout << ans;
}
