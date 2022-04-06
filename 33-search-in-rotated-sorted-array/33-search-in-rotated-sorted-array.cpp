class Solution {
public:
    int search(vector<int>& a, int t) {
        int n=a.size();
        int l=0, r=n-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(a[mid]==t)
                return mid;
            if(a[mid]>a[r]){
                if(t<a[mid] and t>=a[l])
                    r=mid-1;
                else
                    l=mid+1;
            }
            else if(a[mid]<a[l]){
                if(t>a[mid] and t<=a[r])
                    l=mid+1;
                else
                    r=mid-1;
            }
            else{
                if(t<a[mid])
                    r=mid-1;
                else
                    l=mid+1;
            }
        }
        return -1;
    }
};