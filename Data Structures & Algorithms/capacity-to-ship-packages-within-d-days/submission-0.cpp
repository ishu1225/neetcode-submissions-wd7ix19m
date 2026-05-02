class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int i = *max_element(weights.begin(), weights.end());
        long long j = 0;
        for(int x : weights) j += x;

        int ans = j;

        while(i <= j){
            long long mid = i + (j - i) / 2;

            long long sum = 0;
            int currDays = 1;

            for(int x : weights){
                if(sum + x <= mid){
                    sum += x;
                }
                else{
                    currDays++;
                    sum = x;
                }
            }

            if(currDays <= days){
                ans = mid;
                j = mid - 1;
            }
            else{
                i = mid + 1;
            }
        }
        return ans;
    }
};