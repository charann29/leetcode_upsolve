class Solution {
public:
    string reverseWords(string s) {
            stringstream ss(s);
            string word;
            vector<string> words;

            while (ss >> word) {
                words.push_back(word);
            }

            for (string& word : words) {
                reverse(word.begin(), word.end());
            }

            stringstream reversedStr;
            for (int i = 0; i < words.size(); i++) {
                if (i > 0) reversedStr << " ";
                reversedStr << words[i];
            }

            return reversedStr.str();       
    }
};