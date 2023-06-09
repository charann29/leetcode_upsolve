class Solution {
public:
        std::string reverseVowels(std::string s) {
        std::unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {
            if (vowels.count(s[left]) && vowels.count(s[right])) {
                std::swap(s[left], s[right]);
                left++;
                right--;
            } else if (vowels.count(s[left])) {
                right--;
            } else {
                left++;
            }
        }

        return s;
    }
};