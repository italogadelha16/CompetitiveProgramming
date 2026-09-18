class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        if(nums.size()==1) return 0;

        if(nums[0]>nums[1]) return 0;
        
        if(nums[nums.size()-1]>nums[nums.size()-2]) return nums.size()-1;

        return helper(nums, 0, 0, nums.size()-1);

    }

    int helper(vector<int>& nums, long long l, long long m, long long r){

        m = (l+r)/2;

        if(l<=r && m<nums.size() && m>0){
            
            if(nums[m]>nums[m-1] && nums[m]>nums[m+1]) return m;

            if(nums[m]<nums[m+1]){
                l = m;
                return helper(nums, l, m, r);
            }
            
            if(nums[m]>nums[m+1]){
                r = m;
                return helper(nums, l, m, r);
            }
        }
        
        return -1;


    }

};
