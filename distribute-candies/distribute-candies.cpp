class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        
            unordered_set<int> uniqueTypes;
            for (int candy : candyType) {
                uniqueTypes.insert(candy);
            }

            int maxTypes = uniqueTypes.size();
            int maxAllowed = candyType.size() / 2;

            return min(maxTypes, maxAllowed);
    }
};