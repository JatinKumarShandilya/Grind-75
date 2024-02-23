// leetcode q - 169

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto a:nums){
            m[a]++;
        }
        int ans = 0;
        for(auto a:m){
            if(a.second>nums.size()/2){
                ans = a.first;
            }
        }
        return ans;
    }
};