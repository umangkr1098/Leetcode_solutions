class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int start=0;
        int end=arr.size()-2;
        vector<int> v;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0)
            {  if(v.size()>arr.size()-1)
                break;
                v.push_back(0);
             if(v.size()>arr.size()-1)
                break;
                v.push_back(0);
                i+2;
               
             }
            else{
                if(v.size()>arr.size()-1)
                break;
                v.push_back(arr[i]);
                
            }
            
            
          
           
        }
        
         arr=v;
  
        
    }
};