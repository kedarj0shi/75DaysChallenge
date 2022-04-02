class Solution {
public:
    int maxProfit(vector<int>& a) {
        int sell_one=0, sell_two=0;
        int buy_one=INT_MAX, buy_two=INT_MAX;
        int n=a.size();
        
        for(int i=0;i<n;i++){
            buy_one=min(buy_one,a[i]);
            sell_one=max(sell_one,a[i]-buy_one);
            buy_two=min(buy_two,a[i]-sell_one);
            sell_two=max(sell_two,a[i]-buy_two);
        }
        return sell_two;
    }
};