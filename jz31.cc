class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int index=0;
        vector<int> vec;
        for(int i=0; i<pushed.size(); i++)
        {
            vec.push_back(pushed[i]);  //入栈
            while(vec.size() && popped[index] == vec[vec.size()-1])
            {
                index ++ ;
                vec.pop_back();
            }
        }
        if(vec.size())  return false;
        return true;
    }
};
