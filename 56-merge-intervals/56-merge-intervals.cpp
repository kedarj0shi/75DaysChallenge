class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
        sort(a.begin(), a.end());
        vector<vector<int>> v;
        v.push_back(a[0]);
        int n=a.size();
        for(int i=1;i<n;i++){
            if(v.back()[1]>=a[i][0]){
                v.back()[1]=max(v.back()[1], a[i][1]);
            }
            else{
                v.push_back(a[i]);
            }
        }
        return v;
    }
};