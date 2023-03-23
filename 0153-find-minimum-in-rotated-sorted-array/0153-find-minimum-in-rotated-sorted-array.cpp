class Solution {
public:
    int findMin(vector<int>& nums) 
    {  
      for(int i=0;i<nums.size();i++)
      {
          if(nums[0]>nums[i])
              return nums[i];
          
      }
        
      return nums[0];  
    }
};