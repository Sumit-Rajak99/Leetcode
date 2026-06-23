class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) return "0";

        bool isNegative = num < 0;
        num = abs(num);

        string result = "";

        while (num > 0) {
            int rem = num % 7;
            result.push_back('0' + rem);
            num /= 7;
        }

        if (isNegative) result.push_back('-');

        reverse(result.begin(), result.end());
        return result;
    }
};
