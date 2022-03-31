class Solution {
public:
    bool check(int i, int j, vector<vector<int>>& vis){
        int n=vis.size(), m=vis[0].size();
        if(i>=0 and j>=0 and i<n and j<m and !vis[i][j])
            return 1;
        return 0;
    }
    int dfs(int x,int y,vector<vector<int>>& a, vector<vector<int>>& vis){
        vis[x][y]=1;
        int dir[5]={0,1,0,-1,0};
        int ans=1;
        for(int i=0;i<4;i++){
            int nx=x+dir[i], ny=y+dir[i+1];
            if(check(nx,ny,vis) and a[nx][ny])
                ans+=dfs(nx,ny,a,vis);
        }
        return ans;
    }
    int maxAreaOfIsland(vector<vector<int>>& a) {
        int n=a.size(), m=a[0].size();
        
        vector<vector<int>> vis(n, vector<int>(m,0));
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] and a[i][j]){
                    int res=dfs(i,j,a,vis);
                    ans=max(ans,res);
                }
            }
        }
        return ans;
    }
};