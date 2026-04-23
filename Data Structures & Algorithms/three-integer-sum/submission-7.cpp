class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            unordered_set<int> s;
            for (int j = i + 1; j < nums.size(); j++) {
                int needed = -nums[i] - nums[j];
                if (s.find(needed) != s.end()) {
                    res.push_back({nums[i], needed, nums[j]});
                    while (j + 1 < nums.size() && nums[j] == nums[j + 1]) j++;
                }
                s.insert(nums[j]);
            }
        }
        return res;
    }
};
