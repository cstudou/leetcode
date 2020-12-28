class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {

    }
    
    void push(int x) {
        s[++head] = x;
        if(vec.size()==0)
        {
            vec.push_back(x);
        }
        else
        {
            if(vec[vec.size()-1] >= x)
            {
                vec.push_back(x);
            }
        }
    }
    
    void pop() {
        if(s[head] == vec[vec.size()-1])    vec.pop_back();
        head--;
    }
    
    int top() {
        return s[head];
    }
    
    int min() {
        return vec[vec.size()-1];
    }
private:
    int s[20020];
    vector<int> vec;
    int head = -1,tail=0;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->min();
 */
