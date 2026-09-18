class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int l1=nums1.size()-1-n, r1=nums1.size()-1, r2=nums2.size()-1;

        while(r2>=0){
            if(l1>=0 && nums1[l1]>nums2[r2]){
                nums1[r1] = nums1[l1];
                l1--;
            }
            else{
                nums1[r1] = nums2[r2];
                r2--;              
            }

            r1--;
        }

    }
};
