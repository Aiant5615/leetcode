class Solution {
public:
    string countAndSay(int n) {
        string term = "1";
        for (int k = 1; k < n; k++) {
            string out;
            for (int i = 0; i < (int)term.size();) {
                int j = i;
                while (j < (int)term.size() && term[j] == term[i]) j++;
                out += to_string(j - i) + term[i];
                i = j;
            }
            term = out;
        }
        return term;
    }
};
