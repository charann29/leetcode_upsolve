class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
    int evenCount = 0;
    int oddCount = 0;
    
    for (int chip : position) {
        if (chip % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    
    return min(evenCount, oddCount);
}
};