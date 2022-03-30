class Solution {
public:
    int jump(vector<int>& a) {
        int jmp=0, maxr=0, curr=0;
        int n=a.size();
        if(n<=1) return 0;
        for(int i=0;i<n-1;i++){
            maxr=max(maxr, a[i]+i);
            if(i==curr){
                curr=maxr;
                jmp++;
            }
        }
        return jmp;
    }
};