class Solution {
public:
    
    bool check(int i,int j,int m)
    {   
        if(i>=0 && i<m && j>=0 && j<m)
            return true;
        return false;
        
    }
    void d0(vector<vector<int>> &g,int i,int j)
    {
        g[i][j+2]=0;
        g[i+1][j+1]=0;
        g[i+2][j]=0;
        
    }
    void d1(vector<vector<int>> &g,int i,int j)
    {
        g[i][j]=0;
        g[i+1][j+1]=0;
        g[i+2][j+2]=0;
    }
    int regionsBySlashes(vector<string>& grid) 
    {   
        int n=grid.size();
        vector<vector<int>> g(3*n,vector<int> (3*n,1));
        int m=3*n;
        int x=-1,y=-1;
        for(int i=0;i<m;i+=3)
        {   
            for(int j=0;j<m;j+=3)
            {   
                
                
                if(grid[i/3][j/3]=='/')
                {
                    d0(g,i,j);
                }
                else if(grid[i/3][j/3]=='\\')
                {
                    d1(g,i,j);
                }
                else
                {
                    continue;
                }
                    
            }
        }
        int c=0;
        queue<pair<int,int>>q;
        vector<vector<int>> vis(m,vector<int>(m,0));
        int dx[]={-1,0,0,1};
        int dy[]={0,-1,1,0};
                        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<m;j++)
            {   
                if(g[i][j]==1)
                {   
                    c++;
                    q.push(make_pair(i,j));
                    vis[i][j]=1;
                    while(!q.empty())
                    {   
                        int a=q.front().first;
                        int b=q.front().second;
                        q.pop();
                        for(int k=0;k<4;k++)
                        {
                            int l=a + dx[k];
                            int o=b + dy[k];
                            if(check(l,o,m) && g[l][o]==1 && !vis[l][o])
                            {   
                                g[l][o]=0;
                                q.push(make_pair(l,o));
                                vis[l][o]=1;
                            }

                        }
                    }
                }
                
                
            }
        }
        return c;
        
    }
};