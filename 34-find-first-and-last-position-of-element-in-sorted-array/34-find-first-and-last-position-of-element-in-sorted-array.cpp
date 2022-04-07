class Solution {
public:
    vector<int> searchRange(vector<int>& a, int t) {
        int n=a.size();
        if(n==0)
            return {-1,-1};
        int x=lower_bound(a.begin(),a.end(),t)-a.begin();
        int y=upper_bound(a.begin(),a.end(),t)-a.begin();
        y--;
        if(x<0 or y<0) return {-1,-1};
        if(x>=n or y>=n) return {-1,-1};
        if(a[x]!=a[y]) return {-1,-1};
        return {x,y};        
    }
};