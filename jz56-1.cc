class Solution {
public:
    vector<int> singleNumbers(vector<int>& nums) {
        int temp = 0;
        vector<int> v(2);
        for(int i=0; i<nums.size(); i++)
        {
            temp = temp ^ nums[i];
        }
        //temp不为0
        //找temp最后一个1
        //按这一位分类，所有相同的数一定在一组
        int count = 0;
    
        while(temp)
        {
            if(temp & 1) break;
            temp >>= 1; count ++;
        }
        int x = 0, y = 0;
        for(int i=0; i<nums.size(); i++)
        {
            if((nums[i]>=(1<<count)) && (nums[i] & (1<<count)))    x^=nums[i];
            else y^=nums[i];    //比他小实际上就是0
        }
        v[0]=x,v[1]=y;
        return v;
    }
};
