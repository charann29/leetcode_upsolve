class Solution {
public:
    int minTaps(int n, vector<int>& ranges) 
    {
        int taps = 0;
        int maxi = 0, mini = 0; // initially both are zero
        int lastTap = 0;

        while(maxi < n)
        {
            for(int i = lastTap; i <= n; i++)
            {
                if(i - ranges[i] <= mini && i + ranges[i] > maxi)
                {
                    lastTap = i;
                    maxi = i + ranges[i];
                }
            }
            // if garden cannot be watered
            if(maxi == mini)
                return -1;

            taps++;
            mini = maxi;
        }
        return taps;
    }
};