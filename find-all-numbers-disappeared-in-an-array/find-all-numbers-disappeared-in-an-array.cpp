class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        vector<int> anss;
         int i=0;
        sort(nums.begin(),nums.end());
        while(i<nums.size()-1)
        {
            
            if(nums[i]==nums[i+1]){
                ans.push_back(nums[i]);
                i++;}
            else{
                ans.push_back(nums[i]);
            }
            i++;
        } 
         ans.push_back(nums.back());
     // return ans;
        int j=0;
        int k=1;
        while(k<=nums.size())
        {  
            if(k!=ans[j])
            {
               anss.push_back(k);
                
            }
         else if(k==ans[j])
         {
             j++;
         }
         k++;
        }
      return anss;
    }
};