class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
            }
            else if(nums[i] && nums[i+1]==1){
                count+=2;;
            }
            else{
                count =0;
            }
            
            
            if(max<count){
                max=count;
            }
        }
        return max;
    }
};