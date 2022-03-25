class Solution {
public:
    vector<int> sortedSquares(vector<int>& a) {
        int n=a.size();
        
        vector<int> v(n);
        int l=0, r=n-1;
        for(int i=n-1;i>=0;i--){
            if(abs(a[l])>abs(a[r]))
                v[i]=a[l]*a[l++];
            else
                v[i]=a[r]*a[r--];
        }
        return v;
    }
};