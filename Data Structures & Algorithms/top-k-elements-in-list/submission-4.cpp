class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int x:nums){
            mp[x]++;
        }
        vector<vector<int>> bucket(nums.size()+1);
        for(auto &it: mp){
            bucket[it.second].push_back(it.first);
        }
        vector<int> res;
        for(int i=nums.size();i>=0;i--){
            for(int num:bucket[i]){
                res.push_back(num);
                if(res.size()==k) return res;
            }
        }
       
        return res;

    }
};
