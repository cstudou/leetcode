class Solution {
public:
    int missingNumber(vector<int>& nums) {
        /*
        int l=0, r=1;
        int cou = -1;
        while(r!=nums.size())
        {
            if(nums[r]-nums[l] != 1)    
            {
                cou = nums[r]-1; break;
            }
            r++;l++;
        }
        if(cou == -1)
        {
            if(nums[0]!=0)  cou = 0;
            else cou = nums.size();
        }
        
        return cou;
        */
        int l=0, r=nums.size()-1;
        while(l<r)
        {
            int mid = l+r>>1;
            if(nums[mid]!=mid)  r=mid;
            else l=mid+1;
        }
        if(l==nums.size()-1 && l==nums[l])    return nums.size();
        return l;
    }
};
