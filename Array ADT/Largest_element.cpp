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

    int RemoveDuplicates(vector<int>&arr){
        if (arr.empty()) 
            return 0;
         // two pointers bruh
        int i = 0;
        for (int j =1 ; j<arr.size() ; j++){
            if(arr[j] != arr[i])
            i++;
            arr[i] = arr[j];

        }
        return i+1;
    }

    void LeftRotateby1(vector<int>&arr){
        int first = arr[0];
        for (int i = 0; i<arr.size()-1;i++){
            arr[i] = arr[i+1];
        }
        arr[arr.size()-1] = first;
        for(auto it: arr){
            cout << it << endl;
        };        
        
    }

    void LeftRotatebyK(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;

        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
        }

    void movezeroestoend(vector<int> &nums){
        int j = -1;
        for(int i = 0; i < nums.size() ; i++){
            if(nums[i] == 0) {
                j = i;
                break;
            }
        }
        if(j==-1) return;

        for(int i = j+1 ; i<nums.size() ; i++){
            if(nums[i] != 0) {
                swap(nums[i],nums[j]);
                j++;
            }
        }

    

    }
};



int main(){
    ArrayStuff ar;
    vector <int> arr = {2,3,4,5,6};
    ar.LeftRotatebyK(arr,4);
    return 0;
}