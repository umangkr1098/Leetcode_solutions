class Solution {
public:
    bool isPerfectSquare(int num) {
     int s=0;
     int e=num;
     long long mid = s+(e-s)/2;
       while(s<=e)
       {
           if(mid*mid==num)
               return true;
           if(mid*mid>num)
               e=mid-1;
           if(mid*mid<num)
               s=mid+1;
           mid = s+(e-s)/2;
       }
        return false;
    }
};