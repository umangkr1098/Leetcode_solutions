class Solution {
public:
    int countDigits(int num) {
        int n ;
        long int count=0;
       int numm=abs(num);
        while(num>0)
        {
          n=num%10;
          if(numm%n==0)
              count++;
            num=num/10;
        }
        return count;
    }
};