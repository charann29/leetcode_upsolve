class Solution {
public:
    std::vector<std::vector<int>> kClosest(std::vector<std::vector<int>>& points, int k) {
        auto cmp = [](const std::vector<int>& p1, const std::vector<int>& p2) {
            return (p1[0] * p1[0] + p1[1] * p1[1]) < (p2[0] * p2[0] + p2[1] * p2[1]);
        };
        
        std::priority_queue<std::vector<int>, std::vector<std::vector<int>>, decltype(cmp)> pq(cmp);
        
        for (const auto& point : points) {
            pq.push(point);
            
            if (pq.size() > k) {
                pq.pop();
            }
        }
        
        std::vector<std::vector<int>> result;
        while (!pq.empty()) {
            result.push_back(pq.top());
            pq.pop();
        }
        
        return result;
    }
};







