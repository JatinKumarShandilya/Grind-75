// leetcode q - 53

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size(),sum = 0,maxi = nums[0];

        for(int i=0;i<n;i++){
            if(sum < 0){
                sum = 0;
            }

            sum += nums[i];
            maxi = max(maxi,sum);

        }
        return maxi;
    }
};