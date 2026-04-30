class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<pair<int,int>> subs;

        for(int i=0;i<arr.size();i++){
            subs.push_back({abs(arr[i]-x),i});
        }
        sort(subs.begin(),subs.end());
        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(arr[subs[i].second]);
        }
        sort(ans.begin(),ans.end());
        return ans ;
    }
};