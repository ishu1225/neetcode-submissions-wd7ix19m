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
        vector<int> res(st.size());
        for (int i = st.size() - 1; i >= 0; i--) {
            res[i] = st.top();
            st.pop();
        }
        return res;
    }
};