class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==1)return 1;
        sort(nums.begin(),nums.end());
        unordered_map<int,int>mp;
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i]-1)!=mp.end()){
                continue;
            }
                int len=1;
                int ele=nums[i];
                for(int j=i+1;j<nums.size();j++){
                    if(nums[j]-ele==1){
                        len++;
                       
                        ele=nums[j];
                    }
                     maxi=max(maxi,len);
                }

            mp[nums[i]]=i;

        }
        return maxi;
    }
};
