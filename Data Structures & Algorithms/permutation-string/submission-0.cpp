class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> mp;
        for(char c : s1) mp[c]++;

        for(int i = 0; i < s2.size(); i++){
            if(mp.find(s2[i]) != mp.end()){  
                int k = 0;
                int j = i;
                unordered_map<char,int> mp2 = mp;

            
                while(k < s1.size() && j < s2.size()){
                    mp2[s2[j]]--;

                    if(mp2[s2[j]] == 0) mp2.erase(s2[j]);
                    else if(mp2[s2[j]] < 0) break;

                    k++;
                    j++;
                }

                if(k == s1.size() && mp2.empty()) return true;
            }
        }
        return false;
    }
};