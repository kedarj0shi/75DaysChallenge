class Solution {
public:
    int findPairs(vector<int>& a, int k) {
        int cnt=0;
        int n=a.size();
        unordered_map<int,int> mp;
        
        for(int i: a)
            mp[i]++;
        
        for(auto i: mp){
            if(k==0){
                if(i.second>1)
                    cnt++;
            }
            else if(mp.find(k+i.first)!=mp.end())                
                cnt++;
            
        }
        return cnt;
    }
};