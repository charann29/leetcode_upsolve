class Solution {
public:

int canBeTypedWords(string text, string brokenLetters) {
    // unordered_set<char> brokenSet(brokenLetters.begin(), brokenLetters.end());
    istringstream iss(text);
    string word;
    int count = 0;

    while (iss >> word) {
        bool isWordBroken = false;
        for (char ch : word) {
            if (brokenLetters.find(ch) !=string::npos) {
                isWordBroken = true;
                break;
            }
        }

        if (!isWordBroken) {
            count++;
        }
    }

    return count;
}

};