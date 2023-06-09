class Solution {
public:
   bool repeatedSubstringPattern(string s) {
    int n = s.length();

    // Check substrings of length i from 1 to n/2
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            string pattern = s.substr(0, i);
            string constructed = "";

            // Construct the string by repeating the pattern
            for (int j = 0; j < n / i; j++) {
                constructed += pattern;
            }

            // If the constructed string is equal to s, return true
            if (constructed == s) {
                return true;
            }
        }
    }

    return false;
}

};