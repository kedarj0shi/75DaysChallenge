class Solution {
public:
    int findDuplicate(vector<int>& a) {
        int n=a.size();
        for(int i=0;i<n;i++){
            int x=abs(a[i]);
            a[x-1]*=-1;
            if(a[x-1]>0){
                return x;
            }
        }
        return 0;
    }
};