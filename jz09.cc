class CQueue {
public:
    CQueue() {

    }
    
    void appendTail(int value) {
        st1.push_back(value);
    }
    
    int deleteHead() {
        if(st1.empty()) return -1;
        int x = *st1.begin();
        st1.pop_front();
        return x;
    }
private:
    list<int> st1;
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */
