class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int a = m-1, b = n-1;
        for(int i = n+m-1; i >= 0; i--){
            if(a < 0) {
                nums1[i] = nums2[b--]; continue;
            }
            if(b < 0) {
                nums1[i] = nums1[a--]; continue; 
            }

            if(nums1[a] > nums2[b]) nums1[i] = nums1[a--];
            else nums1[i] = nums2[b--];
        }
    }
};