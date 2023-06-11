class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        int m = s1.length();
        int n = s2.length();
        int p = s3.length();

        // If the lengths of s1, s2, and s3 don't match, return false
        if (m + n != p) {
            return false;
        }

        // Create a 2D table to store the intermediate results
        vector<vector<bool>> dp(m + 1, vector<bool>(n + 1, false));

        // Fill the table bottom-up
        for (int i = 0; i <= m; i++) {
            for (int j = 0; j <= n; j++) {
                // Both strings s1 and s2 are empty
                if (i == 0 && j == 0) {
                    dp[i][j] = true;
                }
                // String s1 is empty
                else if (i == 0) {
                    dp[i][j] = (dp[i][j - 1] && s2[j - 1] == s3[i + j - 1]);
                }
                // String s2 is empty
                else if (j == 0) {
                    dp[i][j] = (dp[i - 1][j] && s1[i - 1] == s3[i + j - 1]);
                }
                // Check if current characters of s1 and s3 match
                else if (s1[i - 1] == s3[i + j - 1] && s2[j - 1] != s3[i + j - 1]) {
                    dp[i][j] = dp[i - 1][j];
                }
                // Check if current characters of s2 and s3 match
                else if (s1[i - 1] != s3[i + j - 1] && s2[j - 1] == s3[i + j - 1]) {
                    dp[i][j] = dp[i][j - 1];
                }
                // Check if either current characters of s1 and s3 match or s2 and s3 match
                else if (s1[i - 1] == s3[i + j - 1] && s2[j - 1] == s3[i + j - 1]) {
                    dp[i][j] = (dp[i - 1][j] || dp[i][j - 1]);
                }
            }
        }

        // Return the result
        return dp[m][n];
    }
};
