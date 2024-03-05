class MyHashMap {
public:
    vector<int> map;
    MyHashMap() {
        //Given 10^6
        for(int i=0;i<1000007;i++){
            this -> map.push_back(-1);
        }
    }
    
    void put(int key, int value) {
        map[key] = value;
    }
    
    int get(int key) {
        if(map[key] != -1){
            return map[key];
        }
        return -1;
    }
    
    void remove(int key) {
        //If key exist / doesn't exist key will become -1
        //if(key){
        map[key] = -1;
        //}
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */