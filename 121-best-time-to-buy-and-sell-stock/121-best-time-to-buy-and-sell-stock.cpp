class Solution {
public:
    int maxProfit(vector<int>& a) {
        int buy=a[0];
        int ans=0, n=a.size();
        for(int i=0;i<n;i++){
            ans=max(ans,a[i]-buy);
            buy=min(buy,a[i]);
        }
        return ans;
    }
};