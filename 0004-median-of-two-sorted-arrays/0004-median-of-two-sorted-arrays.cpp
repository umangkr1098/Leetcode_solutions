class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0;i<nums2.size();i++)
        {
            nums1.push_back(nums2[i]);
        }
        
        sort(nums1.begin(),nums1.end());
        
        if(nums1.size()%2==0)
        {   int n = nums1.size()/2;
            return (float)(nums1[n]+nums1[n-1])/2;
            
            
        }
        else
        {
          int n = (nums1.size()+1)/2;
            return nums1[n-1];
        }
    }
};