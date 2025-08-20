#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector <int> nums){
    int ones = 0;
    int twos = 0;

    for(int i = 0; i < nums.size(); i++){
        ones = (ones ^ nums[i]) & ~twos;
        twos = (twos ^ nums[i]) & ~ones;
    }
    return ones;
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
    int ans = singleNumber(v);
    cout << ans;

    return 0;
}
