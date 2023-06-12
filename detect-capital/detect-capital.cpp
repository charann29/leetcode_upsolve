class Solution {
public:
    bool detectCapitalUse(string word) {
            int countUpper = 0;
            int countLower = 0;

            for (char c : word) {
                if (isupper(c))
                    countUpper++;
                else
                    countLower++;
            }

            return countUpper == word.length() || countLower == word.length() ||
                (isupper(word[0]) && countLower == word.length() - 1);        
    }
};