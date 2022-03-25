class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int n=a.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            if(a[i]) 
                a[cnt++]=a[i];
        }
        // cnt=n-cnt;
        for(int j=cnt;j<n;j++)
            a[j]=0;           

    }
};