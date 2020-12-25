class Solution {
public:
    vector<int> exchange(vector<int>& nums) {
        vector<int > vec;
        if(nums.size() == 0) return vec;
        int i=0, j=nums.size()-1;
        
        while(i<j)
        {
            while(i<nums.size()-1 && nums[i] % 2 == 1) i++;
            while(j>=0 && nums[j] % 2 == 0) j--;
           
            if(i<j) swap(nums[i],nums[j]);
            
        }
        return nums;
    }
};
