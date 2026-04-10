class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int l=nums.size()-1;
        int i=0;
        while(i<=l){
            while(l>=0&&nums[l]==val)l--;
            if(i<=l&&nums[i]==val) {
                swap(nums[i],nums[l]);
                l--;
            }
            else i++;
        }
       
        return l+1;
    }
};