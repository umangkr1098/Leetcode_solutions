class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int s=0;
        int n=nums.size();
        int e=n-1;
        vector<int> v(2,-1);
        while(s<=e)
        {   int mid= s+(e-s)/2;
            if(target<nums[mid])
                e=mid-1;
            else if(target>nums[mid])
                s=mid+1;
            else
             //remember this case   
            { if(mid==0 || nums[mid]!=nums[mid-1])
              {
                v[0]=mid;
                break;
              }
               else
                 e=mid-1;
                
            }
        }
        
        
        int s1=0;
        int e1=n-1;
        while(s1<=e1)
        {   int mid1= s1+(e1-s1)/2;
            if(target<nums[mid1])
                e1=mid1-1;
            else if(target>nums[mid1])
                s1=mid1+1;
         //remember this case
            else
            { if(mid1==n-1 || nums[mid1]!=nums[mid1+1])
              {
                v[1]=mid1;
                break;
              }
               else
                 s1=mid1+1;  
            }
        }
      return v;         
    }
};