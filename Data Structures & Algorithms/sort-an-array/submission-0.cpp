class Solution {
public:
    void merge(vector<int> &nums, int left, int mid, int right){
        int i=left;
        int j=mid+1;
        vector<int> temp;
        while(i<=mid&&j<=right){
            if(nums[i]<=nums[j])temp.push_back(nums[i++]);
            if(nums[j]<nums[i])temp.push_back(nums[j++]);
        }
        while(i<=mid)temp.push_back(nums[i++]);
        while(j<=right)temp.push_back(nums[j++]);

        for(int i=left;i<=right;i++){
            nums[i]=temp[i-left];
        }


    }
    void mergesort(vector<int> & nums, int left, int right){
        if(left>=right) return;

        int mid=left+(right-left)/2;
        mergesort(nums,left,mid);
        mergesort(nums,mid+1,right);
        merge(nums,left,mid,right);
    }
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1);
        return nums;
    }
};