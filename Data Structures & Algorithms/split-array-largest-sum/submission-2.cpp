class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        long long i=*max_element(nums.begin(),nums.end());
        long long j=0;
        for(int x:nums){
            j+=x;
        }
        while(i<j){
            long long mid=i+(j-i)/2;
            int countSub=subArrays(nums,mid);
            if(countSub>k)i=mid+1;
            else j=mid;
        }
        return (int)i;
    }
    int subArrays(vector<int>&nums, long long max){
        
        int count=1;
        long long sum=0;
        for(int x: nums){
            if(sum+x<=max)sum+=x;
            else {
                count++;
                sum=x;
            }
        }
        return count;
    }
};