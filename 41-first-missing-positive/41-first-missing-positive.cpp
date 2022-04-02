class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> s;
        for(int i: nums)
            s.insert(i);
        for(int i=1;i<1e6;i++){
            if(s.find(i)==s.end())
                return i;
        }
            
        return 1;
    }
};