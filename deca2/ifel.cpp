#include <iostream>
using namespace std;

int main(){
    int i;
    cout << "Enter the number: ";
    cin >> i;

   switch (i)
   {
   case 1:
    cout << "Hello";
    break;
   
   case 2:
    cout << "Bhai";
    break;

    case 3:
    cout << "Shell";
    break;
   
   case 4:
    cout << "Credit";
    break;

   default:
    break;
   }
}