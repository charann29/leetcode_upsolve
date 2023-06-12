class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        istringstream iss(s);
        string word;
        while (iss >> word) {
            words.push_back(word);
        }

        int n = pattern.length();
        int m = words.size();

        if (n != m) {
            return false;
        }

        unordered_map<char, string> p2w;
        unordered_map<string, char> w2p;

        for (int i = 0; i < n; i++) {
                char c = pattern[i];
                string w = words[i];

                if (p2w.find(c) != p2w.end()) {
                    if (p2w[c] != w) return false;
                } 

                else {
                    if (w2p.find(w) != w2p.end()) return false;
                    p2w[c] = w;
                    w2p[w] = c;
                }
        }

        string rS;
        for (int i = 0; i < n; i++) {
            char c = pattern[i];
            rS += p2w[c] + " ";
        }

        rS.pop_back(); // Remove the trailing space

        return rS == s;
    }
};