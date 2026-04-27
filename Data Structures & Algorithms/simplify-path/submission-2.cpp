class Solution {
public:
    
    vector<string> split(string path) {
        vector<string> result;
        stringstream ss(path);
        string token;

        while (getline(ss, token, '/')) {
            result.push_back(token);
        }

        return result;
    }
    string simplifyPath(string path) {
        stack<string> st;
        vector<string> res=split(path);
        for(int i=0;i<res.size();i++){
            string temp=res[i];
            if(temp=="")continue;
            if(temp==".")continue;
            if(temp==".."){
                if(st.empty())continue;
                st.pop();
                continue;
                }
            st.push(temp);
        }
        string result="";
        if(st.empty())return "/";
        stack<string> st2;
        while(!st.empty()){
           result="/"+st.top()+result;
            st.pop();
        }
        
        // while (!st2.empty()){
        //     result="/"+st2.top()+result;

        //     st2.pop();
        // }
        return result;
    }
};