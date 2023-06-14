class Solution {
public:
    bool isPalindrome(const string& word) {
        int n = word.length();
        for (int i = 0, j = n - 1; i < j; i++, j--) {
            if (word[i] != word[j]) {
                return false;
            }
        }
        return true;
    }

    string firstPalindrome(const vector<string>& words) {
        for (const string& word : words) {
            if (isPalindrome(word)) {
                return word;
            }
        }
        return "";
    }
};