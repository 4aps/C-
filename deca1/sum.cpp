#include <iostream>
using namespace std;

int main(){
    int a[] = {1, 2, 3, 4, 5, 6};
    int target = 19;
    int left = 0;
    int right = 5;
    while(left < right){
        if((a[left] + a[right]) > target) right--;
        else if((a[left] + a[right]) < target) left++;
        else {
            cout<<"Target is present";
            break;
        }
    }
    cout<<"Target is not present";
}