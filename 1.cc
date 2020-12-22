class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map<int, int> mp;
        vector<int> c;
        mp[target-nums[0]] = 0;
        for(int i=1; i<nums.size(); i++) 
        {
            if(mp.find(nums[i])!=mp.end())
            {
                c.push_back(mp[nums[i]]);
                c.push_back(i);
                break;
            }
            mp[target-nums[i]] = i; //存余数
        }
        return c;
    }
    
};
