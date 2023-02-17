class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int count=0;
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr.size();j++){
               if(arr[i]==0){
                   count++;
                   break;
               }
              else if(arr[i]==2*arr[j]){
                    return true;
                }
                
            }
            if(count>1){
                return true;
            }
        }
        return false;
    }
};