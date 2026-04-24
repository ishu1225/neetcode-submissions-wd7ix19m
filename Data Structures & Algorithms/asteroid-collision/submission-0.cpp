class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for(int nums: asteroids){
            while(!st.empty()&&nums<0&&st.top()>0){
                if(abs(st.top())<abs(nums)) st.pop();
                else if(abs(st.top())==abs(nums)){
                    nums=0;
                    st.pop();
                    break;
                }
                else{
                    nums=0;
                    break;
                }
            }
            if(nums!=0){
                st.push(nums);
            }

        }
        vector<int> res;
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};