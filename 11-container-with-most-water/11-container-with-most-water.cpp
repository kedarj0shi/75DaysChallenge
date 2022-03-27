class Solution {
public:
    int maxArea(vector<int>& a) {
        int n=a.size();
        
        int l=0, r=n-1;
        int ans=0;
        while(l<r){
            int x=min(a[l],a[r]);
            int dist=x*(r-l);
            ans=max(ans,dist);
            if(a[l]<a[r])
                l++;
            else
                r--;
        }
        return ans;
    }
};