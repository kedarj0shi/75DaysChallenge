class Solution {
public:
    vector<vector<int>> ans;
    
    void help(vector<int>&a, int n,int pos,vector<int>&temp){
        if(pos==n){
            ans.push_back(temp);
            return ;
        }
        help(a,n,pos+1,temp);
        vector<int> x=temp;
        x.push_back(a[pos]);
        help(a,n,pos+1,x);
    }
    
    vector<vector<int>> subsets(vector<int>& a) {
        int n=a.size();
        vector<int> temp;
        help(a,n,0,temp);
        return ans;
    }
};