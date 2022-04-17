class MinStack {
public:
    MinStack() {
        
    }
    stack<pair<int,int>> s;
    void push(int val) {
        if(s.size()){
            s.push({val,min(val,s.top().second)});
        }
        else
            s.push({val,val});
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        return s.top().first;
    }
    
    int getMin() {
        return s.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */