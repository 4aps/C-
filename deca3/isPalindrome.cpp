#include <iostream>
#include <string>
#include <cctype>
using namespace std;    

bool isPalindrome(string str){
    // string cleaned;
    // for(char c: str){
    //     if(isalnum(static_cast<unsigned char>(c))){
    //         cleaned += tolower(static_cast<unsigned char>(c));
    //     }
    // }
    // cout << cleaned << endl;

    // int left = 0, right = cleaned.size()-1;
    // while(left < right){
    //     if(cleaned[left] == cleaned[right]){
    //         left++;
    //         right--;
    //     }
    //     else return false;
    // }
    // return true;


    
    int left = 0, right = str.length()-1;
        while (left < right) {
            while (left < right && !isalnum(str[left])) left++;
            while (left < right && !isalnum(str[right])) right--;

            if (tolower(str[left]) != tolower(str[right])) {
                return false;
            }
            left++;
            right--;
        }
        return true;
}

int main(){
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    bool ans = isPalindrome(input);
    cout << ans;
}
