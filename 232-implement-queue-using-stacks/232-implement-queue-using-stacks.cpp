class MyQueue {
public:
    MyQueue() {
        
    }
    stack<int> s;    
    void push(int x) {
        if(s.size()==0){
            s.push(x);
            return ;
        }
        int val=s.top();
        s.pop();
        push(x);
        s.push(val);
        return ;
    }
    
    int pop() {
        int x=peek();
        s.pop();
        return x;
    }
    
    int peek() {
        return s.top();
    }
    
    bool empty() {
        return (s.size()==0);
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */