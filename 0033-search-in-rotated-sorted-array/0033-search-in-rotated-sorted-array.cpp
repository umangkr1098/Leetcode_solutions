class Solution {
public:
    int pivot(vector<int> nums)
    {
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        while(s<=e)
        { 
         if(s==e)
             return s;
         if(mid+1<=e && nums[mid]>nums[mid+1])
             return mid;
         else if(mid-1>=s && nums[mid-1]>nums[mid])
             return mid-1;
         else if(nums[s]>nums[mid])
             e=mid-1;
         else
             s=mid+1;  
         mid=s+(e-s)/2;   
        }
        return -1;
    }
    int binarySearch(vector<int> nums, int s, int e,int target)
    {       
        int mid=s+(e-s)/2;
        while(s<=e){
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
                e=mid-1;
            else
                s=mid+1;
            mid=s+(e-s)/2;
        }
        return -1;
        
    }
    int search(vector<int>& nums, int target) {
        int pivans = pivot(nums);
        int ans=0;
       if(target >= nums[0] && target <= nums[pivans]) {
            ans = binarySearch(nums, 0, pivans, target);
        }
        else {
            ans = binarySearch(nums, pivans+1, nums.size()-1, target);
        }
        return ans;
    }
    
};