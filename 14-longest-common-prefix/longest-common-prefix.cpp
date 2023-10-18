class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }

        // Find the shortest string in the array
        std::string shortest = *std::min_element(strs.begin(), strs.end(),
            [](const std::string& a, const std::string& b) {
                return a.size() < b.size();
            }
        );

        for (int i = 0; i < shortest.size(); i++) {
            char c = shortest[i];
            for (const std::string& str : strs) {
                if (str[i] != c) {
                    return shortest.substr(0, i);
                }
            }
        }

        return shortest;
    }
};