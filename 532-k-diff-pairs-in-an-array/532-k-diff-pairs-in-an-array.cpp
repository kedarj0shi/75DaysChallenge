class Solution {
public:
    int findPairs(vector<int>& a, int k) {
        int cnt=0;
        int n=a.size();
        sort(a.begin(), a.end());
        int i=0, j=1;
        while(i<n and j<n){
            if(i==j or a[j]-a[i]<k){
                j++;
                continue;
            }
            if(a[j]-a[i]==k){
                i++;
                j++;
                cnt++;
                while(i<n and a[i]==a[i-1]) i++;
                while(j<n and a[j]==a[j-1]) j++;
                continue;                
            }
            i++;
        }
        
        return cnt;
    }
};