class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l=0;
        int h=matrix.size()-1;
        int ans=0;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(matrix[mid][matrix[0].size()-1]>=target){
                ans=mid;
                h=mid-1;
            }
            else l=mid+1;
        }
        
        int i=0;
        int j=matrix[0].size()-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(matrix[ans][mid]==target)return true;
            else if(matrix[ans][mid]<target)i=mid+1;
            else j=mid-1;
        }
        return false;

    }
};
