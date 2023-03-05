class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans;
        sort(nums.begin(),nums.end());
        if((nums.size()<0)||(nums.size()<1)||(nums.size()<2))
           return nums.back();
            for(int i=0; i<nums.size()-1;i++)
            {
                if(nums[i]!=nums[i+1]){
                   ans = nums[i];
                return ans;}
                else
                    i++;
                
            }
         
           if(nums[nums.size()-1]!=nums[nums.size()-2])
                return nums.back();
        return ans;
    }
};