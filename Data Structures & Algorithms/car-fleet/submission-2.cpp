class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,double>> res;
        for(int i=0;i<speed.size();i++){
            res.push_back({position[i],(double)(target-position[i])/speed[i]});


        }
        sort(res.begin(),res.end());
        int fleet=1;
        double min_time=res[position.size()-1].second;
        for(int i=position.size()-2;i>=0;i--){
            if(res[i].second >min_time){
                fleet++;
                min_time=res[i].second;
            }
        }
        return fleet;
    }

};
