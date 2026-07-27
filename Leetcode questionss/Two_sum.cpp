#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>&nums , int target){
        unordered_map <int,int> mpp;
        int compliment = 0;
        for(int i = 0 ; i <= nums.size() ; i++){
            compliment = target - nums[i];
            if (mpp.find(compliment) != mpp.end()){
            return {mpp[compliment] , i};
            mpp[nums[i]] = i;
        }
        
        }
        return {};
    }

};


int main(){
    Solution sol;
    vector<int>nums = {2,7,11,15};
    vector<int>result;
    int target = 9;
    result = sol.twoSum(nums,target);
    for(auto it : result)
        cout << it << endl;
    return 0;

}