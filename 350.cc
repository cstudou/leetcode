class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp1, mp;
        vector<int> vec;
        for(int i=0; i<nums1.size(); i++)
        {
            if(mp.end() == mp.find(nums1[i]))  mp.insert(make_pair(nums1[i], 1));
            else    mp[nums1[i]]++;
        }
        for(int i=0; i<nums2.size(); i++)
        {
            if(mp1.end() == mp1.find(nums2[i]))  mp1.insert(make_pair(nums2[i], 1));
            else    mp1[nums2[i]]++;
          
        }
        for(auto i = mp.begin(); i!=mp.end(); i++)
        {
            
            auto temp = *i; //pair
           /// cout << mp1[temp.second] << "  ";
            if(mp1.find(temp.first) == mp1.end())   continue;
            else
            {
                int x = min(temp.second, mp1[temp.first]);
                for(int i=0; i<x; i++)    vec.push_back(temp.first);
            }
        }
        return vec;
    }
};
