class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int ed=-1,head=0;
        vector<int> vec;
        int p[1010]={}; //队列，队列中存下标
        for(int i=0; i<nums.size(); i++)
        {
            if(i-k+1>p[head] && head<=ed) head++;
            while(head<=ed && nums[p[ed]] <= nums[i]) ed--;
            p[++ed] = i;
            if(i-k+1 >=0)
            {
                vec.push_back(nums[p[head]]);
            }

        }
        return vec;
    }
};
