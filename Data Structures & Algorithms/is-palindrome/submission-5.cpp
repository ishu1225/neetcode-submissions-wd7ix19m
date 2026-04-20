class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<j){
           if(isalnum(s[i])&&isalnum(s[j])){
            char a=tolower(s[i]);
            char b=tolower(s[j]);
            if(a!=b)return false;
            if(a==b){
                i++;
                j--;
            }
           }
           else if(!isalnum(s[i]))i++;
           else if(!isalnum(s[j]))j--;
           
           

           
            
            
        }
        return true;
    }
};
