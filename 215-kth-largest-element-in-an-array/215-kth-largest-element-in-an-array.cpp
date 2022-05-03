class Solution {
public:
    int findKthLargest(vector<int>& a, int k) {
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i: a){
            pq.push(i);
            if(pq.size()>k) pq.pop();
        }
        return pq.top();
    }
};