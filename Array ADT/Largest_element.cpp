#include <bits/stdc++.h>
using namespace std;

class ArrayStuff{
public:
    int result = 0;
    void LargestElement(vector<int>&arr){
        sort(arr.begin(), arr.end());
        cout << arr.back() << endl;  // 2nd would be to choose the first element as max and loop thru the list and compare the element

    }
<<<<<<< HEAD
=======
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
    int Linear_search(vector<int>&arr , int target){
        for(int i = 0 ; i < arr.size() ; i++){
            if (arr[i] == target){
                return i;
            }
        } return -1;
    }

    vector<int> Union2Arrays(vector<int>& arr1, vector<int>& arr2) {
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    int i = 0, j = 0;
    vector<int> ans;

    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            if (ans.empty() || ans.back() != arr1[i])
                ans.push_back(arr1[i]);
            i++;
        }
        else if (arr2[j] < arr1[i]) {
            if (ans.empty() || ans.back() != arr2[j])
                ans.push_back(arr2[j]);
            j++;
        }
        else {
            if (ans.empty() || ans.back() != arr1[i])
                ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    while (i < arr1.size()) {
        if (ans.empty() || ans.back() != arr1[i])
            ans.push_back(arr1[i]);
        i++;
    }

    while (j < arr2.size()) {
        if (ans.empty() || ans.back() != arr2[j])
            ans.push_back(arr2[j]);
        j++;
    }

    return ans;



    }

    int findmissingnunmber(const vector<int>&arr){
        int n = arr.size()+1;
        long long formula = n*1LL*(n+1)/2;
        long long sum = 0;
        for(auto it:arr){
            sum += it;
        }
        return formula-sum;
    }

    int OneStreak(const vector<int>& arr) {
        int count = 0;
        int maxCount = 0;

        for (int num : arr) {
            if (num == 1) {
                count++;
                maxCount = max(maxCount, count);
            } else {
                count = 0;
            }
        }

        return maxCount;
    }
>>>>>>> 34f58195cd4829a5d556a021c1f0d900c6dc67e7
};



int main(){
    ArrayStuff ar;
<<<<<<< HEAD
    vector <int> arr = {2,3,4,34,22};
    ar.LargestElement(arr);
=======
    vector <int> arr1 = {2,3,4,5,6};
    vector <int> arr2 = {2,3,8,2,6};

    vector<int> ans = ar.Union2Arrays(arr1,arr2);
    for(auto it : ans){
        cout << it << endl;
    }
>>>>>>> 34f58195cd4829a5d556a021c1f0d900c6dc67e7
    return 0;
}