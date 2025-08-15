#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices) {
    int maxProfit = 0;
    int minValue = INT_MAX;
    int n = prices.size();
    for(int i = 0; i < n-1; i++){
        if(prices[i] < minValue){
            minValue = prices[i];
        }
        if(prices[i+1] > minValue && (maxProfit < (prices[i+1]-minValue))){
            maxProfit = prices[i+1] - minValue;
        }
    }
    return maxProfit;
}

int main(){
    int n;
    cout << "Enter the size ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int ans = maxProfit(v);
    cout << ans;
}
