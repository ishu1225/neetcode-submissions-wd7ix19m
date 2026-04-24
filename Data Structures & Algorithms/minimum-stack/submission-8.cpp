class MinStack {
public:
    MinStack() {
        
    }  
    stack<long long> st;
    long long mini;
    void push(int val) {
        if(st.empty()){
            st.push(val);
            mini=val;

        }
        else if(val>=mini) st.push(val);
        else{
            st.push(2LL*val-mini);
            mini=val;
        }
    }   
    
    void pop() {
        if(st.empty()) return;
        long long a=st.top();
        st.pop();
        if(a<mini) mini=2LL*mini-a;
        
    }
    
    int top() {
       if(mini<=st.top())return st.top();
       else{
        return mini;
       }
        
    }
    
    int getMin() {
        return mini;

        
    }
};
