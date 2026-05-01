class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int maxTime) {
        int k = 1;
        int h = *max_element(piles.begin(), piles.end());
        int ans = INT_MAX;

        while(k<=h){
            int mid=k+(h-k)/2;
            int totalTime=0;

            for(int nums:piles){
                totalTime+=(nums+mid-1)/mid;
            }
            if(totalTime<=maxTime){
                ans=min(ans,mid);
                h=mid-1;
            }
            else if(totalTime>maxTime)k=mid+1;

        }
        return ans;
    }
};
