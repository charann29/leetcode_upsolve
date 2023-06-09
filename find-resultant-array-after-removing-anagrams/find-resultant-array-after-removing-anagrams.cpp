class Solution {
public:


bool isAnagram(const string& word1, const string& word2) {
    if (word1.size() != word2.size()) {
        return false;
    }

    unordered_map<char, int> frequency;
    for (char ch : word1) {
        frequency[ch]++;
    }

    for (char ch : word2) {
        if (frequency.find(ch) == frequency.end() || frequency[ch] <= 0) {
            return false;
        }
        frequency[ch]--;
    }

    return true;
}

vector<string> removeAnagrams(vector<string>& words) {
    vector<string> result;
    int n = words.size();
    int i = 0;

    while (i < n) {
        result.push_back(words[i]);

        if (i >= 1 && isAnagram(words[i], words[i-1])) {
            result.pop_back(); // Delete the previous word since it is an anagram of the current word
        }

        i++;
    }

    return result;
}



};