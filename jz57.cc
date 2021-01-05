class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> vec(2);
        int i=0, j=nums.size()-1;
        while(i<j)
        {
            if(nums[i]+nums[j] == target)
            {
                vec[0]=nums[i], vec[1]=nums[j];
                break;
            }
            if(nums[i]+nums[j] > target)    j--;
            if(nums[i]+nums[j] < target) i++;
        }
        return vec;
    }
};
