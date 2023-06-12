class Solution {
public:
    string licenseKeyFormatting(string s, int k) {

            s.erase(remove(s.begin(), s.end(), '-'), s.end());
            transform(s.begin(), s.end(), s.begin(), ::toupper);
            int length = s.length();
            int fG = length % k;
            string result;

            for (int i = 0; i < length; i++) {
                if (i > 0 && (i - fG) % k == 0) {
                    result += '-';
                }

                result += s[i];
            }

            return result;
    }
};