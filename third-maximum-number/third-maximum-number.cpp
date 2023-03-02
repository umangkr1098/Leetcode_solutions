class Solution {
public:
    int thirdMax(vector<int>& nums) {
         int a=INT_MIN,b=INT_MIN,c=INT_MIN;
        bool flag=0;
        for(int i=0;i<nums.size();i++)
        {
           a=max(nums[i],a);
        }
         for(int i=0;i<nums.size();i++)
        {
           if(nums[i]!=a)
               b=max(nums[i],b);
        }
         for(int i=0;i<nums.size();i++)
        {
           if(nums[i]!=a && nums[i]!=b){
               c=max(nums[i],c);
               flag=1;
           }
               
        }
        if(flag)
            return c;
        else
            return a;

    }
};