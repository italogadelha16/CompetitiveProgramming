class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        return helper(nums, 0, 0, nums.size()-1, target);

    }

    int helper(vector<int>& nums, int l, int m, int r, int target){
        m = (l+r)/2;

        if(l<=r){
            if(nums[m]==target){return m;}
            else if(nums[m]>target){
                r = m-1;
                return helper(nums, l, m, r, target);
            }
            else{
                l = m+1;
                return helper(nums, l, m, r, target);
            }
        }
        else{return -1;}
    }

};
