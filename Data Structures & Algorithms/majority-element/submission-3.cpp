class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int n=nums.size();
       int count=1;
       sort(nums.begin(),nums.end());
       int prev=nums[0] ;
       for(int i=1;i<nums.size();i++){
        if(nums[i]==prev){
            count++;
            if(count>n/2)return nums[i];
        }else
        {
        prev=nums[i];
        count=1;
        }
       }
       return nums[0];
    }
};