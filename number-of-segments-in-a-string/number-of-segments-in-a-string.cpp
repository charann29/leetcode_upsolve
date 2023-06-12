class Solution {
public:
    int countSegments(string s) {
        istringstream iss(s);
        string word;
        int count = 0;

        while (iss >> word) {
            count++;
        }

        return count;    
    }
};