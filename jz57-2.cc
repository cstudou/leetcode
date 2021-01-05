class Solution {
public:
    vector<vector<int>> findContinuousSequence(int target) {
        vector<vector<int>>vec;
        vector<int> res;
        for (int l = 1, r = 2; l < r;){
            //int sum = (l + r) * (r - l + 1) / 2;
            int sum = (r-l+1)*l + (r-l+1)*(r-l)/2;
            if(sum == target)
            {
                res.clear();
                for(int j=l; j<=r; j++)
                    res.push_back(j);
                vec.push_back(res);
                l++; //important
            }
            else if(sum > target)
            {
                l++;
            }
            else
            {
                r++;
            }
        }
        return vec;
    }
};
