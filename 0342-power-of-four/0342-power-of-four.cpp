class Solution {
public:
    bool isPowerOfFour(int n) {
        // if(n==1)
        // {
        //     return true;
        // }
        // if(n%4!=0)
        // {
        //     return false;
        // }
        // return isPowerOfFour(n/4);
        while(n!=1)
        {
            if(n%4!=0 ||n==0)
            {
                return false;
            }
            if(n==1)
            {
                return true;
            }
            n/=4;
        }
        return n==1;
    }
};