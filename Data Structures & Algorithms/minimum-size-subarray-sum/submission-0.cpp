class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0;
        int r=0;
        int sum=0;
        int mini=INT_MAX;
        while(r<nums.size()){
            sum=sum+nums[r];
            while(sum>=target&&l<=r){
                sum=sum-nums[l];
                mini=min(mini,r-l+1);
                l++;
            }
            r++;


        }
        return mini==INT_MAX?0:mini;
    }
};