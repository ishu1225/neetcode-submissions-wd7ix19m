class Solution {
public:
    vector<vector<int>> memo;
    int helper(vector<int>&nums, int target, int sum , int index){
        if(index>=nums.size()) return 0;
        sum+=nums[index];
        int count=0;
        if(sum==target)count=1;
      
      
        return count+ helper(nums,target,sum,index+1);;
    }
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            count=count+helper(nums, k,0,i);
        }
        return count;
    }
};