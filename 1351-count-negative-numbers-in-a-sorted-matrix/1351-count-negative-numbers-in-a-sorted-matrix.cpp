class Solution {
public:
    int countNegatives(vector<vector<int>>& a) {
        int n=a.size(), m=a[0].size();
        int i=0, j=m-1;
        int ans=0;
        
        while(i<n){
            while(j>=0 and a[i][j]<0) j--;
            ans+=m-j-1;
            i++;
        }
        return ans;
    }
};