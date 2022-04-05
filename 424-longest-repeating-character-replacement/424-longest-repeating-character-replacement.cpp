class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        unordered_map<char,int> mp;
        
        int ans=0, maxf=0;
        
        for(int i=0;i<n;i++){
            mp[s[i]]++;
            maxf=max(maxf,mp[s[i]]);
            
            if(ans-maxf<k)
                ans++;
            else
                mp[s[i-ans]]--;
        }
        return ans;
    }
};