#include <iostream>
#include <vector>
using namespace std;

bool packagesAllowed(vector<int> weights, int days, int mid){

    int n = weights.size();
    int shipWeight = 0, dayCount = 1;
    for(int i = 0; i < n; i++){
        if(shipWeight + weights[i] <= mid)
            shipWeight += weights[i];
        else{
            dayCount++;
            if(dayCount > days || weights[i] > mid)
                return false;
            shipWeight = weights[i];
        }
    }
    return true;
}

int shipWithinDays(vector<int> weights, int days){

    int n = weights.size(), sum = 0, max=-1;

    for(int i = 0; i < n; i++){
        sum+=weights[i];
        if(weights[i]>max)
            max = weights[i];
    }
    
    if(days == n)
        return max;

    int start = max, end = sum, minWeight = -1;

    while(start <= end){
        int mid = start+(end-start)/2;
        if(packagesAllowed(weights, days, mid)){
            minWeight = mid;
            end = mid-1; 
        }
        else
            start = mid+1;
    }
    return minWeight;
}


int main(){
    int n, days;

    cout << "Enter the number of packages: ";
    cin >> n;

    vector<int> weights(n);
    cout << "Enter the weights of each " << n << " packages in order: ";
    for(int i = 0; i<n; i++)
    cin >> weights[i];

    cout << "Done . . ." << endl;

    cout << "Enter the number of days: ";
    cin >> days;

    cout << "Least weight capacity needed to ship all packages within " << days << " days: ";
    cout << shipWithinDays(weights, days);
    return 0;
}