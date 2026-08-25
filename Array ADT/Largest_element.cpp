#include <bits/stdc++.h>
using namespace std;

class ArrayStuff{
public:
    int result = 0;
    void LargestElement(vector<int>&arr){
        sort(arr.begin(), arr.end());
        cout << arr.back() << endl;  // 2nd would be to choose the first element as max and loop thru the list and compare the element

    }
};



int main(){
    ArrayStuff ar;
    vector <int> arr = {2,3,4,34,22};
    ar.LargestElement(arr);
    return 0;
}