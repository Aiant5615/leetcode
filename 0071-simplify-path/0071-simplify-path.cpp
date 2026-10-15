class Solution {
public:
    string simplifyPath(string path) {
        vector<string> stack;
        stringstream ss(path);
        string part;
        while (getline(ss, part, '/')) {
            if (part == "..") { if (!stack.empty()) stack.pop_back(); }
            else if (!part.empty() && part != ".") stack.push_back(part);
        }
        string out;
        for (const string& dir : stack) out += "/" + dir;
        return out.empty() ? "/" : out;
    }
};
