class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
         int sum=0;
        int n;
         int sum2=0;
         for(int i=0;i<nums.size();i++)
         {
             sum=sum+nums[i];
         }
         
         for(int i=0;i<nums.size();i++)
         {   while(nums[i]>0)
             {
               n=nums[i]%10;
               nums[i]=nums[i]/10;
               sum2+=n;  
             }
         }
        
        return abs(sum-sum2);
    } 
};