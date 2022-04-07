class Solution {
public:
    double myPow(double x, int n) {
        double ans=1.00;
        int f=0;
        if(n<0)
            f=1;
             
        if(x==0 || x==1) return x;
        if(x==-1){
            if(n%2)
                return x;
            return abs(x);
        }
        if(n==INT_MIN) return 0;   
        n=abs(n);
        while(n){
            if(n%2){
                ans*=x;
                n--;
            }
            n/=2;
            x=x*x;            
        }
        if(f)
            ans=1/ans;
        return ans;
    }
};