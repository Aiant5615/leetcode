class Solution {
public:
    string multiply(string num1, string num2) {
        int m = num1.size(), n = num2.size();
        vector<int> digits(m + n, 0);
        for (int i = m - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {
                int total = (num1[i] - '0') * (num2[j] - '0') + digits[i + j + 1];
                digits[i + j + 1] = total % 10;
                digits[i + j] += total / 10;
            }
        }
        string result;
        for (int d : digits) if (!(result.empty() && d == 0)) result += char('0' + d);
        return result.empty() ? "0" : result;
    }
};
