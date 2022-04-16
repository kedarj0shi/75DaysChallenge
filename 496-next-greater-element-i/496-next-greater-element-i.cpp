class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& b, vector<int>& a) {
        unordered_map<int,int> mp;
        stack<int> s;
        vector<int> ans;
        for(int i=0;i<a.size();i++){
            while(s.size() and a[s.top()]<a[i]){
                mp[a[s.top()]]=a[i];
                s.pop();
            }
            s.push(i);
        }
        for(int i: b){
            int x=mp[i];
            if(mp[i]==0)
                x=-1;
            ans.push_back(x);
        }
        return ans;
    }
};