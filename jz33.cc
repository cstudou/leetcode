class Solution {
public:
    bool fuck(vector<int> &vec, int a, int b)
    {
        //如果left==right，就一个节点不需要判断了，如果left>right说明没有节点，
        //也不用再看了,否则就要继续往下判断
        if(a >= b)  return true;
        int root = vec[b];
        int left = a;

        while(vec[left] < root)   left++;
        int temp = left;
        while(temp < b)
        {
            if(vec[temp++] < root)  return false;
        }
        return fuck(vec, a, left-1) && fuck(vec, left, b-1);
    }
    bool verifyPostorder(vector<int>& postorder) {
        return fuck(postorder, 0, postorder.size()-1);
    }
};



   
