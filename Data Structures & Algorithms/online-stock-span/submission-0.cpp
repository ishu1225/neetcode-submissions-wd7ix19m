class StockSpanner {
public:
    StockSpanner() {
        
    }
  
    vector<int> res;
    
    int next(int price) {
        res.push_back(price);
        stack<int> st;
        vector<int> count(res.size(),1);
        for(int i=0;i<res.size();i++){
            while(!st.empty()&&res[st.top()]<=res[i])st.pop();
            if(!st.empty())count[i]=i-st.top();
            else count[i]=i+1;
            st.push(i);
        }
        return count[res.size()-1];
        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */