class Solution {
public:
    bool canJump(vector<int>& a) {
        int n=a.size();
        int jmp=a[0];
        
        for(int i=1;i<n;i++){
            jmp--;
            if(jmp<0)
                return 0;
            if(a[i]>jmp){
                jmp=a[i];
            }
        }
        return 1;
    }
};