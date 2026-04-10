class MyHashSet {
public:
    vector<int> nums;
    MyHashSet() {
        
    }
    
    void add(int key) {
        int found=false;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==key) found=true;
        }
        if(!found)nums.push_back(key);

        
    }
    
    void remove(int key) {
        for(int i=0;i<nums.size();i++){
        if(nums[i]==key){
             nums.erase(nums.begin()+i);
             break;}

        }
        
    }
    
    bool contains(int key) {
        int found=false;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==key) found=true;
        }
        return found;
        
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */