class Solution {
public:
    bool check(int i, int j,int n, int m){

        if(i>=0 and j>=0 and i<n and j<m)
            return 1;
        return 0;
    }
    int dfs(int x,int y,vector<vector<int>>& a){
        a[x][y]=0;
        int dir[5]={0,1,0,-1,0};
        int n=a.size(), m=a[0].size();
        int ans=1;
        for(int i=0;i<4;i++){
            int nx=x+dir[i], ny=y+dir[i+1];
            if(check(nx,ny,n,m) and a[nx][ny])
                ans+=dfs(nx,ny,a);
        }
        return ans;
    }
    int maxAreaOfIsland(vector<vector<int>>& a) {
        int n=a.size(), m=a[0].size();
        
        // vector<vector<int>> vis(n, vector<int>(m,0));
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]){
                    int res=dfs(i,j,a);
                    ans=max(ans,res);
                }
            }
        }
        return ans;
    }
};