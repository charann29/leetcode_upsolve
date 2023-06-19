class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;
        vector<bool> charSet(26, false); // Set to keep track of allowed characters
        
        // Populate the character set with allowed characters
        for (char ch : allowed) {
            charSet[ch - 'a'] = true;
        }
        
        // Check each word if it is consistent
        for (const string& word : words) {
            bool consistent = true;
            for (char ch : word) {
                if (!charSet[ch - 'a']) {
                    consistent = false;
                    break;
                }
            }
            if (consistent) {
                count++;
            }
        }
        
        return count;
    }
};
