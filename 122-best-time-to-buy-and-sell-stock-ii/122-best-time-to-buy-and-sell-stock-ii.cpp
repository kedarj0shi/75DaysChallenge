class Solution {
public:
    int maxProfit(vector<int>& a) {
        int buy=a[0], sell=a[0];
        int ans=0;
        for(int i=1;i<a.size();i++){
            if(buy>a[i])
                buy=a[i];
            
            if(buy<a[i]){
                sell=a[i];
                ans+=sell-buy;
                buy=sell;
            }
        }
        return ans;
    }
};