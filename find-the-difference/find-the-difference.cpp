class Solution {
public:
    char findTheDifference(string s, string t) {
            unordered_map<char, int> count;
            for (char c : s) {
                count[c]++;
            }
            for (char c : t) {
                if (count.find(c) == count.end() || count[c] == 0) {
                    return c;
                }
                count[c]--;
            }
            return '\0';
    }
};