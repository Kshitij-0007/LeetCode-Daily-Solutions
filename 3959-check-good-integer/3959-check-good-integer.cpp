class Solution {
public:
    bool checkGoodInteger(int n) {
        int digsum=0;
        int sqrsum=0;
        while(n>0)
        {
            int dig=n%10;
            digsum+=dig;
            sqrsum+=(dig*dig);
            n=n/10;
        }
        return (sqrsum-digsum)>=50;
    }
};