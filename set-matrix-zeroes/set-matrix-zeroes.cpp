class Solution {
public:
    void setZeroes(vector<vector<int>>& A) {
    unordered_map<int,int>c,r;
    for(int i=0;i<A.size();i++)
        for(int j=0;j<A[0].size();j++)
            if(A[i][j]==0){
                c[j]=1;
                r[i]=1;
            }
    for(int i=0;i<A.size();i++)
        for(int j=0;j<A[0].size();j++)
            if(c[j]==1 || r[i]==1)
                A[i][j]=0;
    }
};