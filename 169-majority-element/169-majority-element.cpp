class Solution {
public:
    int majorityElement(vector<int>& a) {
        int ans=a[0];
        int n=a.size(), cnt=1;
        for(int i=1;i<n;i++){
            if(ans==a[i])
                cnt++;
            else
                cnt--;
            
            if(cnt==0){
                ans=a[i];
                cnt++;
            }
        }
        return ans;
    }
};