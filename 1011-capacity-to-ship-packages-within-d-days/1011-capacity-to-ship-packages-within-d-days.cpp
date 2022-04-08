class Solution {
public:
    int shipWithinDays(vector<int>& a, int d) {
        int l=0, r=0;
        for(int i: a){
            l=max(l,i);
            r+=i;
        }

        while(l<r){
            int mid=(l+r)/2;
            int cnt=0, day=1;
            for(int i=0;i<a.size() and day<=d;cnt+=a[i++]){
                if(cnt+a[i]>mid){
                    cnt=0;
                    day++;
                }
            }
            if(day>d)
                l=mid+1;
            else
                r=mid;
        }
        
        return l;
    }
};