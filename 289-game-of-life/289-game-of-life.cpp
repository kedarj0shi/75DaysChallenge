class Solution {
public:
    bool check(int i,int j,vector<vector<int>>& a){
        int n=a.size(), m=a[0].size();
        if(i>=0 and j>=0 and i<n and j<m)
            return 1;
        return 0;
    }
    void help(int x,int y, vector<vector<int>>& a,vector<vector<int>>& v, int f){
        int cnto=0;
        int d[8][2] = {{1,-1},{1,0},{1,1},{0,-1},{0,1},{-1,-1},{-1,0},{-1,1}};
        for(int i=0;i<8;i++){
            int nx=x+d[i][0], ny=y+d[i][1];
            if(check(nx,ny,a)){
                if(a[nx][ny])
                    cnto++;
            }
        }
        if(!f and cnto==3)
            v[x][y]=1;
        else if(f){
            if(cnto>3) v[x][y]=0;
            else if(cnto==2 || cnto==3) v[x][y]=1;
            else if(cnto<2) v[x][y]=0;
        }
    }
    void gameOfLife(vector<vector<int>>& a) {
        int n=a.size(), m=a[0].size();
        vector<vector<int>> v(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                help(i,j,a,v,a[i][j]);
            }
        }
        a=v;
    }
};