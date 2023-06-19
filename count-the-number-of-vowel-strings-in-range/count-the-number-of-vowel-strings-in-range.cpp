#include <vector>
#include <string>

class Solution {
public:
    int vowelStrings(std::vector<std::string>& words, int left, int right) {
        int count = 0;
        for (int i = left; i <= right; i++) {
            if (isVowelString(words[i])) {
                count++;
            }
        }
        return count;
    }
    
private:
    bool isVowelString(const std::string& word) {
        char firstChar = word[0];
        char lastChar = word[word.size() - 1];
        return isVowel(firstChar) && isVowel(lastChar);
    }
    
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
};
