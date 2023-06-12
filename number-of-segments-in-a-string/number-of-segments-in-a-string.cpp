class Solution {
public:
    int countSegments(string s) {
            int count = 0;
            bool iS = true;

            for (char c : s) {
                if (c != ' ') {
                    if (iS) {
                        count++;
                        iS = false;
                    }
                } else iS=true;
            }

            return count;
        }
};