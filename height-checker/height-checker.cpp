class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> ans;
        int count =0;
        ans=heights;
        sort(heights.begin(),heights.end());
         for(int i=0;i<heights.size();i++)
        {
          if(ans[i]!=heights[i])
                count++;
        }
        
     return count;   
    }
    
};