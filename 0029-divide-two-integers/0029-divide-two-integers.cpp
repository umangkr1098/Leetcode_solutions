class Solution {
public:
    int divide(int dividend, int divisor) {
       long long int s=0;
       long long  int e=abs(dividend);
        long long int ans;
        long long int mid=s+(e-s)/2;
         if (divisor == 0 || (dividend == INT_MIN && divisor == -1)) {
            return INT_MAX;
        }
          if (divisor == 0 || (dividend == INT_MIN && divisor == 1)) 
            return INT_MIN;
        
        while(s<=e)
        {
            if(abs(mid*divisor)==abs(dividend))
            {
                ans=mid;
                break;
            }
            else if(abs(mid*divisor)<abs(dividend))
            {
                ans=mid;
                s=mid+1;
            }
            
            else if(abs(mid*divisor)>abs(dividend))
                e=mid-1;
            
            mid=s+(e-s)/2;
            
        }
        if((dividend<0 && divisor<0) || (dividend>0 && divisor>0) )
            return ans;
        else
            return -ans;
        
    }
};