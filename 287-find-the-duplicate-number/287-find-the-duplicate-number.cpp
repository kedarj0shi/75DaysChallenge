class Solution {
public:
    int findDuplicate(vector<int>& a) {
        int n=a.size();
        int ans=0;
        unordered_map<int,int> mp;
        for(int i: a){
            if(mp[i])
                return i;
            mp[i]++;
        }
        return 0;
    }
};