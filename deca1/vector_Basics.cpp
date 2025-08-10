#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    
    // 1
    vector<int> k = {1, 2, 3, 4, 5};
    for(int i = 0; i < 5; i++){
        cout << k[i] << " ";
    } 

    // 2
    int n; 
    cout << "Enter size: ";
    cin >> n;
    vector<int> p(n);
    for(int i = 0; i < n; i++){
        cin >> p[i];
    } 

    cout << "Original: ";

    for(int i = 0; i < n; i++){
        cout << p[i] << " ";
    } 

    sort(p.begin(), p.end());
    cout << " " << endl;

    cout << "Sorted: ";

    for(int i = 0; i < n; i++){
        cout << p[i] << " ";
    } 
    cout << " " << endl;

    sort(p.begin(), p.end(), greater<int>());
    cout << "Sorted Desc: ";
    for(int i = 0; i < n; i++){
        cout << p[i] << " ";
    } 
    cout << " " << endl;

    // 3
    vector<int> v(5, 1);
    v.push_back(4);
    v.push_back(9);
    v.pop_back();
    
    cout << "Array: ";
    for(auto i: v){
        cout << i << " ";
    }
    cout << endl;


    //4

    vector<int> l;
    l.push_back(4);
    l.push_back(11);
    l.push_back(44);
    l.push_back(81);
    l.push_back(13);
    l.pop_back();
    l.pop_back();
    l.pop_back();
    l.clear();
    cout << "Size: " << l.size() << endl;
    cout << "Capacity: " << l.capacity() << endl;
    l.push_back(4);
    l.push_back(11);
    l.push_back(44);
    l.push_back(81);
    l.push_back(13);

    cout << "Size: " << l.size() << endl;
    cout << "Vector array: ";
    for(int i = 0; i < l.size(); i++){
        cout << l[i] << " ";
    }
    l[4] = 31;
    cout << " " << endl;    

    cout << "At index 3: " << l.at(3)<< endl;
    l.erase(l.begin() + 3);
    cout << "At index 3: " << l.at(3) << endl;

    cout << "At front index: " << l.front() << endl;
    cout << "At back index: " << l.back() << endl;
    cout << "Is vector empty? " << l.empty() << endl;


    l.insert(l.begin()+1, 65);
    cout << "Print through auto iterator: ";
    for(auto it = l.begin(); it != l.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    cout << "Print REVERSE through auto iterator: ";
    for(auto it = l.rbegin(); it != l.rend(); it++){
        cout << *it << " ";
    }
    cout << endl;

    cout << "Element present or not? " << binary_search(l.begin(), l.end(), 65) << endl;
    cout << "Index of element: " << find(l.begin(), l.end(), 65) - l.begin() << endl;

    l.clear();
    cout << "Is vector empty? " << l.empty() << endl;

}

