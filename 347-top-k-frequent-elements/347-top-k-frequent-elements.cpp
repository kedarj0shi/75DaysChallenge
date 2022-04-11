class Solution {
public:
    vector<int> topKFrequent(vector<int>& a, int k) {
        unordered_map<int,int> mp;
        priority_queue<pair<int,int>> pq;
        for(int i: a)
            mp[i]++;
        for(auto p: mp){
            pq.push({p.second, p.first});
        }
        vector<int> ans;
        while(pq.size() and k){
            auto p=pq.top();
            pq.pop();
            ans.push_back(p.second);
            k--;
        }
        return ans;
    }
};