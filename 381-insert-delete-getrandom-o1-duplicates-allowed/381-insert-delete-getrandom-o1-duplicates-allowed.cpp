class RandomizedCollection {
public:
    unordered_map<int, unordered_set<int>> mp;
    vector<int> v;
    RandomizedCollection() {
    }
    
    bool insert(int val) {
        bool f=mp.find(val)==mp.end();
        mp[val].insert(v.size());
        v.push_back(val);
        return f;
    }
    
    bool remove(int val) {
         if(mp.find(val) != mp.end()) {
            int i = *mp[val].begin();
            if(mp[val].size() == 1) {
                mp.erase(val);
            } else {
                mp[val].erase(mp[val].begin());
            }
            if (i < v.size() - 1) {
                v[i] = v.back();
                mp[v[i]].erase(v.size() - 1);
                mp[v[i]].insert(i);
            }
            v.pop_back();
            return true;
        }
        return false;
    }
    
    int getRandom() {
        return v[rand()%v.size()];
    }
};

/**
 * Your RandomizedCollection object will be instantiated and called as such:
 * RandomizedCollection* obj = new RandomizedCollection();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */