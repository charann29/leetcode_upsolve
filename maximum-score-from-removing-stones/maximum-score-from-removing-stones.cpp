class Solution {
public:
    int maximumScore(int a, int b, int c) {
        int ans=0;
        priority_queue<int> pq;
        // pushing all three number to track the first two largest score
        pq.push(a);
        pq.push(b);
        pq.push(c);
        // we will continue to increase the score by one 
        // until two non empty piles is present
        while(pq.top()>0){
            int first;
            if(pq.top()>0){
                first = pq.top();
                pq.pop();
            }
            int second;
            // we are checking if the second pile is non-empty or not
            if(pq.top()>0){
                second = pq.top();
                pq.pop();
            }
            // if second pile is empty then we cannot move further
            // and break the loop
            else{
                break;
            }
            pq.push(first-1);
            pq.push(second-1);
            ans++;
        }
        return ans;
    }
};