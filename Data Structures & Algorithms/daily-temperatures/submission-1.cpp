class Solution {
public:

    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int> res(n,0);
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty()&&temperatures[st.top()]<=temperatures[i])st.pop();
            if(!st.empty())res[i]=st.top();
            st.push(i);
        } 
        for(int i=0;i<res.size();i++){
            if(res[i]==0)continue;
            else res[i]=res[i]-i;
        }
        return res;
    }
};
