class Solution {
public:
    int peakIndexInMountainArray(vector<int>& a) {
        int n=a.size();
        int i=0;
        while(i+1<n and a[i]<a[i+1])
            i++;
        if(i!=n) return i;
        return -1;
    }
};