class Solution {
public:
    int mySqrt(int x) {
        
        if(x==0) return 0;
        if(x==1) return 1;

        return helper(0, 0, x/2, x);

    }

    int helper(long long l, long long m, long long r, int x){
        m = (l+r)/2;

        if(l<=r){
            if(m*m==x){return m;}
            else if(m*m>x){
                r = m-1;
                return helper(l, m, r, x);
            }
            else{
                l = m+1;
                return helper(l, m, r, x);
            }
        }
        else{return r;}
    }

};
