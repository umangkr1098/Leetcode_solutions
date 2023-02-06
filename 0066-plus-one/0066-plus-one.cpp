class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
     
      bool start=false;

       if(digits[0]==9)
        start = true;
          int i;
      for(i=digits.size()-1;i>=0;i--)
      {
       if(digits[i]>8){
           digits[i]=0;           
       }
       else{
           digits[i]++;
           break;
       }
      } 
     if(start && i==-1){
        digits.insert(digits.begin(),1);
          
      }
      return digits;

    }
};