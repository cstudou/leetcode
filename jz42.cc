class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int dp[100010] = {};
        for(int i=0; i<nums.size(); i++)    dp[i] = nums[i];
        for(int i=1; i<nums.size(); i++)
        {
            dp[i] = max(dp[i], dp[i-1]+nums[i]);
        }
        int cou = -0x3f3f3f3f;
        for(int i=0; i<nums.size(); i++)
            cou = max(cou, dp[i]);
        return cou;
    }
};
