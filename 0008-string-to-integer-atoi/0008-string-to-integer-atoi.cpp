class Solution {
public:
    int myAtoi(string s) {
        char* c;
        long ans=strtol(s.c_str(), &c, 10);
        if(ans>INT_MAX)
            return INT_MAX;
        if(ans<INT_MIN)
            return INT_MIN;
        return (int)ans;
    }
};