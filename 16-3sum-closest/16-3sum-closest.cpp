class Solution {
public:
    int threeSumClosest(vector<int>& a, int t) {
        int n=a.size();
        int ans=a[0]+a[1]+a[2];
        sort(a.begin(), a.end());
        for(int i=0;i<n-2;i++){
            int l=i+1, r=n-1;
            while(l<r){
                int x=a[i]+a[l]+a[r];
                if(x-t==0)
                    return x;
                if(abs(t-x)<abs(t-ans)){
                    ans=x;
                }
                if(x>t)
                    r--;
                else
                    l++;
            }
        }
        return ans;
    }
};