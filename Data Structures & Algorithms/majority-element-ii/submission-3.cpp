class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int candiA=0;
        int candiB=1;
        int countA=0;
        int countB=0;
        int req=nums.size()/3;
        for(int a:nums){
            if(a==candiA)countA++;
            else if(a==candiB)countB++;
            else  if (countA==0){
                candiA=a;
                countA=1;
            }
            else if (countB==0){
                candiB=a;
                countB=1;
            }
            else{
                countA--;
                countB--;

            }

        }
        countA=0;
        countB=0;
        for(int a:nums){
            if(a==candiA) countA++;
            if(a==candiB) countB++;
        }
        vector<int> res;

        if(countA>req) res.push_back(candiA);
        if(countB>req) res.push_back(candiB);
        return res;
    }
};