class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) 
    { vector<int> ans;
     vector<int> temp;
        for(int i=0;i<nums.size();i++)
    {       int n;
            temp.clear();
            while(nums[i]>0)
           {
             n=nums[i]%10;
             temp.push_back(n);
             nums[i]=nums[i]/10;
            }
    
     for(int j=temp.size()-1;j>=0;j--)
     {
         ans.push_back(temp[j]);
     }
        
    }
     
     return ans;
        
    }
};