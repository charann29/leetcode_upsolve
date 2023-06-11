class Solution {
public:
    int minDistance(string word1, string word2) {
    int n = word1.length();
    int m = word2.length();
    
    vector<vector<int>> dp(n+1, vector<int> (m+1, -1));
    
    return f(n, m, word1, word2, dp);
    }
    int f(int i, int j, string A, string B, vector<vector<int>> &dp){
    if(i == 0)  return j;
    if(j == 0)  return i;
    
    if(dp[i][j]!=-1)    return dp[i][j];
    
    int points = 0;
    if(A[i-1] == B[j-1])
        points = 0 + f(i-1, j-1, A, B, dp);
    else
        points = 1 + min(f(i,j-1,A,B, dp), min(f(i-1,j-1,A,B, dp),f(i-1,j,A,B, dp)));
        //minimum of three steps theeksovali ra chinna!!
    return dp[i][j] = points;
}
};