class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
        int n=a.size();
        unordered_map<int,int> mp;
        int sum=0, ans=0;
        mp[0]=1;
        for(int i: a){
            sum+=i;
            if(mp.find(sum-k)!=mp.end()){
                ans+=mp[sum-k];
            }
            mp[sum]++;
        }
        return ans;
    }
};