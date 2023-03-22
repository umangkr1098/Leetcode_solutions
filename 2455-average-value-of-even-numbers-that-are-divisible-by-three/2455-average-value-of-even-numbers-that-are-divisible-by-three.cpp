class Solution {
public:
    int averageValue(vector<int>& nums)
    { int count=0;
     vector<int> ans;
     for(int i=0;i<nums.size();i++)
     {  if(nums[i]%6==0){
             count=1;
             ans.push_back(nums[i]);}
     }   int n=ans.size();
         int sum=0;
        for(int j=0;j<ans.size();j++)
        {sum += ans[j];}
     if(count==0)
       return 0;
     else
       return sum/n;
    }   
};