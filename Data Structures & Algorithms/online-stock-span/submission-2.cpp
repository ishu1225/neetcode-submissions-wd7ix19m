class StockSpanner {
public:
    StockSpanner() {
        
    }
  
    vector<int> res;
    stack<int> st;
    int next(int price) {
        res.push_back(price);

        int i=res.size()-1;
            while(!st.empty()&&res[st.top()]<=res[i])st.pop();
            int span;
            if(!st.empty())span=i-st.top();
            else span=i+1;
            st.push(i);
        
        return span;
        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */