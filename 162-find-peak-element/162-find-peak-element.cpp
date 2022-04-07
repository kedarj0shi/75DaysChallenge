class Solution {
public:
    int findPeakElement(vector<int>& a) {
        int n=a.size();
        if(n==1) return 0;
        if(n==2){
            if(a[0]>a[1])
                return 0;
            return 1;
        }
        vector<int> v(n+2,INT_MIN);
        for(int i=1;i<=n;i++){
            v[i]=a[i-1];
        }
        for(int i: v)
            cout<<i<<" ";
        n+=2;
        int l=0, r=n-1;
        
        while(l<=r){
            int mid=(l+r)/2;
            if(v[mid]>v[mid+1] and v[mid]>v[mid-1])
                return mid-1;
            else if(v[mid]<v[mid+1])
                l=mid+1;
            else
                r=mid-1;
        }
        return r;
    }
};