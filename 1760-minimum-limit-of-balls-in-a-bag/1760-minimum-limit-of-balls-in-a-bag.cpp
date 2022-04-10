class Solution {
public:
    int minimumSize(vector<int>& a, int k) {
        int l=1, r=1e9;
        while(l<r){
            int mid=(l+r)/2;
            int cnt=0;
            for(int i: a){
                cnt+=(i-1)/mid;
            }
            if(cnt>k)
                l=mid+1;
            else
                r=mid;
        }
        return l;
    }
};