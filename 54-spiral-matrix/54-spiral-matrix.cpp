class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& a) {
        vector<int> ans;
        int n=a.size(), m=a[0].size();
        int top=0, bottom=n-1, left=0, right=m-1;
        int dir=0;
        while(left<=right and top<=bottom){
            if(dir%4==0){
                for(int i=left;i<=right;i++)
                    ans.push_back(a[top][i]);
                dir++;
                top++;
            }
            else if(dir%4==1){
                for(int i=top;i<=bottom;i++)
                    ans.push_back(a[i][right]);
                dir++;
                right--;
            }
            else if(dir%4==2){
                for(int i=right;i>=left;i--)
                    ans.push_back(a[bottom][i]);
                dir++;
                bottom--;
            }
            else if(dir%4==3){
                for(int i=bottom;i>=top;i--)
                    ans.push_back(a[i][left]);
                dir++;
                left++;
            }
        }
        return ans;
    }
};