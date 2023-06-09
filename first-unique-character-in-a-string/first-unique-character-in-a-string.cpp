class Solution {
public:
int firstUniqChar(string s) {
    unordered_map<char, int> countMap;

    // Populate the count map
    for (char c : s) {
        countMap[c]++;
    }

    // Find the first non-repeating character
    for (int i = 0; i < s.length(); i++) {
        if (countMap[s[i]] == 1) {
            return i;
        }
    }

    return -1; // No non-repeating character found
}

};