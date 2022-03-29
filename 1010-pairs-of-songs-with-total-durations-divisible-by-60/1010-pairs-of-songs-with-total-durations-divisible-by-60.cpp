class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& a) {
        int ans=0;
        unordered_map<int,int> mp;
        for(int i: a){
            int x=i%60;
            if(x==0)
                ans+=mp[x];
            else
                ans+=mp[60-x];
            mp[x]++;
        }
        return ans;
    }
};