#include <iostream>
#include <vector>
using namespace std;

int minEatingSpeed(vector<int> piles, int h){
    int n = piles.size(), minSpeed=-1;
    long long sum = 0, max = -1;

    if(h < n)
        return -1;
        
    for(int i = 0; i < n; i++){
        sum += piles[i];
        if(piles[i] > max)
            max = piles[i];
    }

    if(h == n)
        return max;

    double result = sum/h;

    int start = result, end = max;

    if(!start)
        start=1;

    while(start <= end){
        int mid = start+(end-start)/2;

        int hrsCount = 0;

        for(int i = 0; i < n; i++){
            hrsCount += piles[i]/mid;
            if(piles[i]%mid)
                hrsCount++;
        }

        if(hrsCount > h){
            start = mid+1;
            
        }
        else{
            minSpeed = mid;
            end = mid-1;
        }
    }
    return minSpeed;
}

int main(){
    int n, hours;

    cout << "Enter the number of piles: ";
    cin >> n;

    vector<int> piles(n);
    cout << "Enter the number of bananas for each of " << n << " piles: ";
    for(int i = 0; i<n; i++)
    cin >> piles[i];

    cout << "Done . . ." << endl;

    cout << "Enter the number of hours: ";
    cin >> hours;

    cout << "Minimum speed to eat all the bananas within " << hours << " hours is: ";
    cout << minEatingSpeed(piles, hours);
    return 0;
}