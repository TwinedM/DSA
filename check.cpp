#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static bool cmp(string a , string b){
        return a+b > b+a;
    }

    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end() , greater<int>());
        return nums[k-1];
    }
    string largestNumber(vector<int>&nums){
        vector<string> arr;
        for(int num:nums ){
            arr.push_back(to_string(num));

            sort(arr.begin(),arr.end() , cmp);

            if (arr[0] == "0")
            return "0";

            string ans = "";
            for(string s : arr){
                ans+=s;
            }
            return ans;
        }
        
        
    }
};


int main(){
    Solution sol;
    vector<int>nums = {3,2,1,5,6,4};
    string num = sol.largestNumber(nums);
    cout << num <<endl;
    return 0;


}