class TimeMap {
public:
    TimeMap() {
        
    }
    unordered_map<string,vector<pair<string,int>>> mp;
    void set(string key, string value, int timestamp) {
        mp[key].push_back({value,timestamp});
    }
    
    string get(string key, int timestamp) {
        if(mp.find(key)==mp.end()) return "";
        auto &v=mp[key];
        int i=0;
        int j=v.size()-1;
        string ans="";
        while(i<=j){
            int mid=i+(j-i)/2;
            if(v[mid].second<=timestamp){
                ans=v[mid].first;
                i=mid+1;
            }
            else j=mid-1;
        }
        return ans;

    }
};
