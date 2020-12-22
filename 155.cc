class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int x) {
        stack_list.push_back(x);
        if(stack_set.find(x) == stack_set.end())
        {
            stack_set[x] = 1;
        }
        else stack_set[x]++;
    }
    
    void pop() {
        int x = *(--stack_list.end());
        stack_list.pop_back();
        if(stack_set[x] == 1)
        {
            stack_set.erase(x);
        }
        else
        {
            stack_set[x]--;
        }
    }
    
    int top() {
        list<int>::iterator it = stack_list.end();
        --it;
        return *it;
    }
    
    int getMin() {
        return (*stack_set.begin()).first;
    }
private:
    list<int> stack_list;
    map<int,int> stack_set;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
