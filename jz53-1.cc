class Solution {
public:
    int search(vector<int>& nums, int target) {
        int cou = 0;
        int l=0, r=nums.size()-1;
        //找第一个小于
        while(l<r)
        {
            int mid = (l+r)>>1;
            if(nums[mid]<target) l=mid+1;
            else r=mid;
     
        }
      
        for(int i=l; i<nums.size(); i++)
        {
            if(nums[i]==target)
            {
                cou++;
            }
            else break;
        }
        return cou;
    }
};
