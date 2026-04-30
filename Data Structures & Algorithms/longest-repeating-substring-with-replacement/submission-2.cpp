class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;
        int r=0;
        int maxl=0;
        int maxf=0;
        unordered_map<char,int> mp;
        while(r<s.size()){
            mp[s[r]]++;
            maxf=max(maxf,mp[s[r]]);
            while((r-l+1)-maxf>k){
                mp[s[l]]--;
                l++;
            }
            maxl=max(maxl,r-l+1);
            r++;
        }
        return maxl;
        
    }
};
