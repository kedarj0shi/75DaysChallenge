class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n=s.size();
        vector<int> ans;
        unordered_map<char,pair<int,int>> mp;
        vector<pair<vector<int>,int>> v;
        
        for(int i=0;i<n;i++){
            if(mp.count(s[i])){
                mp[s[i]].second=i;
            }
            else{
                mp[s[i]].first=i;
                mp[s[i]].second=i;
            }
        }
        
        for(auto i: mp){
            int x=i.second.first, y=i.second.second, c=i.first-'a'; 
            v.push_back({{x,y},c});
        }
        
        sort(v.begin(),v.end());
        vector<vector<int>> temp;
        temp.push_back(v[0].first);
        
        // for(auto i: v){
        //     cout<<i.second<<" : ";
        //     cout<<i.first[0]<<" "<<i.first[1]<<endl;
        // }
        for(int i=1;i<v.size();i++){
            if(temp.back()[1]>=v[i].first[0]){
                temp.back()[1]=max(temp.back()[1],v[i].first[1]);
            }
            else{
                temp.push_back(v[i].first);
            }
        }
        for(auto x: temp){
            ans.push_back(x[1]-x[0]+1);
        }
        return ans;
    }
};