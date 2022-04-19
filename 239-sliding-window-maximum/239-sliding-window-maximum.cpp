class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& a, int k) {
        deque<int> dq;
        int n=a.size();
        vector<int> ans;
        
        for(int i=0;i<n;i++){
            
            if(!dq.empty() and dq.front()==i-k) 
                dq.pop_front();
            
            while(!dq.empty() and a[dq.back()]<a[i])
                dq.pop_back();
            
            dq.push_back(i);
            
            if(i+1-k>=0){
                ans.push_back(a[dq.front()]);
            }
        }
        return ans;
        
    }
};