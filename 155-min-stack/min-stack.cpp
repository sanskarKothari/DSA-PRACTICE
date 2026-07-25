class MinStack {
public:
stack<long long>s;
stack<long long>mn;
    MinStack() {
        
    }
    
    void push(int value) {
        s.push(value);
        if(mn.empty() || value<=mn.top() ){
            mn.push(value);
        }
        
    }
    
    void pop() {
        if(mn.top()==s.top()){
            mn.pop();
        }
        s.pop();
        
    }
    
    int top() {
        return s.top();
        
    }
    
    int getMin() {
        return mn.top();
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */