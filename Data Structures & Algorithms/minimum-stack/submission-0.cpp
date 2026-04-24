class MinStack {
public:
    MinStack() {
        
    }
    stack <int> st1,st2;

    void push(int val) {
        st1.push(val);
        if(st2.empty())st2.push(st1.top());
        else if(st1.top()<st2.top()&& !st2.empty())st2.push(st1.top());
        else st2.push(st2.top());
    }
    
    void pop() {
        if(!st1.empty())st1.pop();
        if(!st2.empty())st2.pop();
    }
    
    int top() {
        return st1.top();
    }
    
    int getMin() {
        return st2.top();
    }
};
