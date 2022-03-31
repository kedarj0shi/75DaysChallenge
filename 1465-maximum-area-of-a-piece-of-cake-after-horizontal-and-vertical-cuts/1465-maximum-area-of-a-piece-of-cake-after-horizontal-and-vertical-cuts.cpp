class Solution {
public:
    int maxArea(int row, int col, vector<int>& hc, vector<int>& vc) {
        sort(hc.begin(), hc.end());
        sort(vc.begin(), vc.end());
        
        int maxH=max(hc[0], row-hc[hc.size()-1]);
        int maxV=max(vc[0], col-vc[vc.size()-1]);
    
        for(int i=1;i<hc.size();i++){
            maxH=max(maxH, hc[i]-hc[i-1]);
        }
        
        for(int i=1;i<vc.size();i++){
            maxV=max(maxV, vc[i]-vc[i-1]);
        }
        int mod=1e9+7;
        
        return (long)maxH*maxV%mod;
        
    }
}; 