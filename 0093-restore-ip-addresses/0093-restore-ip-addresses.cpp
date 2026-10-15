class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        vector<string> result, parts;
        function<void(int)> backtrack = [&](int start) {
            if (parts.size() == 4) {
                if (start == (int)s.size()) result.push_back(parts[0] + "." + parts[1] + "." + parts[2] + "." + parts[3]);
                return;
            }
            for (int len = 1; len <= 3 && start + len <= (int)s.size(); len++) {
                string part = s.substr(start, len);
                if ((part[0] == '0' && len > 1) || stoi(part) > 255) break;
                parts.push_back(part);
                backtrack(start + len);
                parts.pop_back();
            }
        };
        backtrack(0);
        return result;
    }
};
