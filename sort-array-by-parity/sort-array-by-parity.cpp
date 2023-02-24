class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i=0;
        int end=nums.size()-1;
   while(i<=end)
        { 
            
          if(nums[i]%2!=0)
          {
              swap(nums[i],nums[end]);
              end--;
              
          } 
          else
          {
           i++;
          }
        }
        return nums;
        
    }
};