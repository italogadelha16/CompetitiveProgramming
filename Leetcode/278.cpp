class Solution {
public:
    int firstBadVersion(int n) {
        return helper(1, 0, n);
    }
    
    int helper(long long l, long long m, long long r){
        
        if(isBadVersion(1)) return 1;

        m = (l+r)/2;

        if(l<=r){
            
            if(isBadVersion(m-1)==false && isBadVersion(m)==true){return m;}
            else if(isBadVersion(m)==true){
                r = m-1;
                return helper(l, m, r);
            }
            else{
                l = m+1;
                return helper(l, m, r);
            }
        }
        else{return -1;}
    }


};
