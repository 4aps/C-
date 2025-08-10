#include <iostream>
#include <vector>
using namespace std;

vector<int> segregate0and1(vector<int> arr){

    int n = arr.size();
    int i = 0, j = n-1;
    while(i < j){
        if(arr[i] == 0){
            i++;
        }
        else{
            if(arr[j] == 0){
                swap(arr[i], arr[j]);
                i++;
                j--;
            }
            else{
                j--;
            }
        }
    }
    return arr;
}

int main(){
    // [0, 0, 0, 1, 1, 0 , 1, 0]

    int n;
    cout << "Enter the size: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    vector<int> ans = segregate0and1(v);
    for(int i = 0; i < n; i++){
        cout << ans[i];
    }
}
