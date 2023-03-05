class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans;
        int count =0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {if(nums[i]!=i){
                ans=i;
                count++;
                break;}       
        }
        if(count==0){
            return nums.size();
        }
      return ans;  
    }
};