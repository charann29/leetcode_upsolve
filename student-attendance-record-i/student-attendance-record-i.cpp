class Solution {
public:
    bool checkRecord(string s) {
        int absentt = 0;
        int lateCount = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'A') {
                absentt++;
                lateCount = 0;
            } else if (s[i] == 'L') {
                lateCount++;
            } else {
                lateCount = 0;
            }

            if (absentt >= 2 || lateCount >= 3) {
                return false;
            }
        }

        return true;        
    }
};