class Solution {
public:
    vector<int> plusOne(vector<int>& a) {
        int n=a.size();
        int carry=0;
        reverse(a.begin(),a.end());
        a[0]++;
        for(int i=0;i<n;i++){
            a[i]+=carry;
            carry=a[i]/10;
            a[i]=a[i]%10;           
        }
        if(carry)
            a.push_back(carry);
        reverse(a.begin(),a.end());
        return a;
    }
};