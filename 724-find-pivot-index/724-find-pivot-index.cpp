class Solution {
public:
    int pivotIndex(vector<int>& a) {
        int n=a.size();
        vector<int> sum(n,0);
        
        for(int i=0;i<n;i++){
            sum[i]=a[i];
            if(i)
                sum[i]+=sum[i-1];
        }
        
        for(int i=0;i<n;i++){
            int left=sum[i]-a[i];
            int right=sum[n-1]-left-a[i];
            
            if(left==right)
                return i;
            
        }
        return -1;
    }
};