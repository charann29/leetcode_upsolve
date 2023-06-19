

class Solution {
public:
    int maxWords(string sentence) {
        int count = 0;
        istringstream iss(sentence);
        string word;
        while (iss >> word) {
            count++;
        }
        return count;
    }

    int mostWordsFound(vector<string>& sentences) {
        int maxWordCount = 0;

        for (const string& sentence : sentences) {
            int wordCount = maxWords(sentence);
            maxWordCount = max(maxWordCount, wordCount);
        }

        return maxWordCount;
    }
};
