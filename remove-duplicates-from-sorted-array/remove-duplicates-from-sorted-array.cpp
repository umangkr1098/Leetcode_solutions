class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //vector<int> ans;
        //int j=0;
        for(int i=0;i<nums.size()-1;){
              if(nums[i]==nums[i+1]){
                 nums.erase(nums.begin()+i+1);
              //i++;
              }
            else{
                i++;
            }
        }
        
        return nums.size();
    }
};