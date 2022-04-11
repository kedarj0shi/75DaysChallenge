class Solution {
public:
    bool isAlienSorted(vector<string> v, string s) {
        int mp[26];
        for (int i = 0; i < 26; i++)
            mp[s[i] - 'a'] = i;
        
        for (string &w : v)
            for (char &c : w)
                c = mp[c - 'a'];
        
        return is_sorted(v.begin(), v.end());
    }
};