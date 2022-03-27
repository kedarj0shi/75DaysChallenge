class Solution {
public:
    void nextPermutation(vector<int>& a) {
        int n=a.size();
        int bp=-1;
        for(int i=n-1;i>0;i--){
            if(a[i]>a[i-1]){
                bp=i-1;
                break;
            }
        }
        if(bp==-1){
            reverse(a.begin(),a.end());
            return ;
        }
        for(int i=n-1;i>=0;i--){
            if(a[i]>a[bp]){
                swap(a[i],a[bp]);
                reverse(a.begin()+bp+1,a.end());
                break;
            }
        }
    }
};