class Solution {
public:
    int reverse(int x) {
        bool isNegative = x < 0;

        string num = to_string(abs((long long)x));
        std::reverse(num.begin(), num.end());

        long long ans = stoll(num);

        if (isNegative)
            ans = -ans;

        if (ans > INT_MAX || ans < INT_MIN)
            return 0;

        return (int)ans;
    }
};