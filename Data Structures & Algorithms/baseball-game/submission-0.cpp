class Solution {
public:
    int calPoints(vector<string>& op) {
        vector<int> nums;
        int count=0;
        for(string c: op){
            if(c=="+"){
                int n=nums.size();
                int d=nums[n-1]+nums[n-2];
                nums.push_back(d);
               
            }
            else if(c=="C") {
                nums.pop_back();
                
            }
           else if(c=="D"){
            int d=2*nums.back();
            nums.push_back(d);
           }
           else{
            nums.push_back(stoi(c));
           }
        }
        int sum=0;
        for(int x: nums){
            sum+=x;
        }
        return sum;
    }
};