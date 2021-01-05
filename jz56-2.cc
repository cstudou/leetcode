class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int> vec(35);
        for(int i=0; i<nums.size(); i++)
        {
            int temp = nums[i];
            for(int index=0; index<32; index++)
            {
                if((temp>>index) & 1)    vec[index]+=1;     //若二进制位位1就++
            }
        }
        int ret = 0;
        for(int i=0; i<vec.size(); i++)
        {
            if(vec[i]%3)
            {
                ret+=(1<<i);
            }
        }
        return ret;
    }
};
