class Solution {
public:
    string getPermutation(int n, int k) {
        string digits;
        vector<int> factorial(n, 1);
        for (int i = 1; i <= n; i++) digits += char('0' + i);
        for (int i = 1; i < n; i++) factorial[i] = factorial[i - 1] * i;
        k--;
        string out;
        for (int i = n - 1; i >= 0; i--) {
            int index = k / factorial[i];
            k %= factorial[i];
            out += digits[index];
            digits.erase(digits.begin() + index);
        }
        return out;
    }
};
