class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        string res="";
        for(int i=0;i<str[0].size();i++){
            for(int j=1;j<str.size();j++){
                if(str[0][i]!=str[j][i]) return res;
             
            }
               res+=str[0][i];
        }
        return res;
    }
};