class Solution {
public:
    bool isAlienSorted(std::vector<std::string>& words, std::string order) {
    std::unordered_map<char, int> charOrder;
    int n = order.length();

    for (int i = 0; i < n; i++) {
        charOrder[order[i]] = i;
    }

    int m = words.size();

    for (int i = 0; i < m - 1; i++) {
        std::string currWord = words[i];
        std::string nextWord = words[i + 1];
        int len1 = currWord.length();
        int len2 = nextWord.length();

        for (int j = 0; j < len1 && j < len2; j++) {
            char currChar = currWord[j];
            char nextChar = nextWord[j];

            if (currChar != nextChar) {
                if (charOrder[currChar] > charOrder[nextChar]) {
                    return false;
                }
                break;
            }
        }

        if (len1 > len2 && currWord.substr(0, len2) == nextWord) {
            return false;
        }
    }

    return true;
}

};