class Solution {
public:
    vector<string> findWords(vector<string>& words) {
            unordered_set<char> row1{'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
            unordered_set<char> row2{'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'};
            unordered_set<char> row3{'z', 'x', 'c', 'v', 'b', 'n', 'm'};

            vector<string> result;

            for (const auto& word : words) {
                bool isRow1 = true;
                bool isRow2 = true;
                bool isRow3 = true;

                for (char ch : word) {
                    if (ch >= 'A' && ch <= 'Z') {
                        ch = tolower(ch);
                    }

                    if (!row1.count(ch)) {
                        isRow1 = false;
                    }

                    if (!row2.count(ch)) {
                        isRow2 = false;
                    }

                    if (!row3.count(ch)) {
                        isRow3 = false;
                    }
                }

                if (isRow1 || isRow2 || isRow3) {
                    result.push_back(word);
                }
            }

            return result;
            }
};