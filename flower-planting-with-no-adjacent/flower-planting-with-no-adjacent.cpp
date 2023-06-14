#include <vector>
#include <unordered_map>

class Solution {
public:
    vector<int> gardenNoAdj(int n, vector<vector<int>>& paths) {
        vector<vector<int>> adjacencyList(n);
        for (const auto& path : paths) {
            int garden1 = path[0] - 1;
            int garden2 = path[1] - 1;
            adjacencyList[garden1].push_back(garden2);
            adjacencyList[garden2].push_back(garden1);
        }
        
        vector<int> flowers(n, 0);  // Flower types for each garden
        
        for (int garden = 0; garden < n; ++garden) {
            unordered_map<int, bool> usedFlowers;
            for (int neighbor : adjacencyList[garden]) {
                usedFlowers[flowers[neighbor]] = true;
            }
            for (int type = 1; type <= 4; ++type) {
                if (usedFlowers.find(type) == usedFlowers.end()) {
                    flowers[garden] = type;
                    break;
                }
            }
        }
        
        return flowers;
    }
};
