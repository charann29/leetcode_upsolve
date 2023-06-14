class Solution {
public:
    bool isStrictlyPalindromic(int n) {


        for (int base = 2; base <= n - 2; ++base) {
            string representation;
            int num = n;
            while (num > 0) {
                representation += to_string(num % base);
                num /= base;
            }
            if (!isPalindromic(representation)) {
                return false;
            }
        }
        return true;
    }
    bool isPalindromic(const string& s) {
            return s == string(s.rbegin(), s.rend());
        }

};