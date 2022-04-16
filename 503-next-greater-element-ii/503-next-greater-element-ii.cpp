class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& a) {
        int n=a.size();
        vector<int> ans(n,-1);
        stack<int> s;        
        
        for(int i=0;i<2*n;i++){
            while(s.size() and a[s.top()]<a[i%n]){
                ans[s.top()]=a[i%n];
                s.pop();
            }
            s.push(i%n);
        }
        return ans;        
    }
};