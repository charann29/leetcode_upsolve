class Solution {
public:


int maximumValue(vector<string>& strs) {
    int maxVal = 0;

    for (const string& str : strs) {
        int val = 0;

        if (all_of(str.begin(), str.end(), ::isdigit)) {
            // If the string consists of digits only
            val = stoi(str);
        } else {
            // If the string has non-digit characters
            val = str.length();
        }

        maxVal = max(maxVal, val);
    }

    return maxVal;
}

};