#include <bits/stdc++.h>
using namespace std;

class ArrayStuff{
public:
    int result = 0;
    void LargestElement(vector<int>&arr){
        sort(arr.begin(), arr.end());
        cout << arr.back() << endl;  // 2nd would be to choose the first element as max and loop thru the list and compare the element

    }
    void SecondLargest(vector<int>&arr){
        sort(arr.begin(),arr.end());   // i could loop twice to find the 2nd largest element too
        cout << arr[arr.size()-2] << endl;
    }

    bool CheckifSorted(vector<int>&arr){
        for(int i = 0 ; i<arr.size()-1; i++){
            if (arr[i] < arr[i-1])
                return false;     
        }
        return true;
    }

    void RemoveDuplicates(vector<int>&arr){ // two pointers bruh
    }
};



int main(){
    ArrayStuff ar;
    vector <int> arr = {2,3,4,5,6};
     printf("%s",ar.CheckifSorted(arr)?"True":"False");
    
    return 0;
}