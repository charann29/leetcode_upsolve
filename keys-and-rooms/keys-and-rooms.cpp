class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
            int n = rooms.size();
            vector<bool> visited(n, false);

            queue<int> q;
            q.push(0);
            visited[0] = true;

            while (!q.empty()) {
                int roomIndex = q.front();
                q.pop();

                for (int key : rooms[roomIndex]) {
                    if (!visited[key]) {
                        visited[key] = true;
                        q.push(key);
                    }
                }
            }

            // Check if all rooms are visited
            for (bool roomVisited : visited) {
                if (!roomVisited) {
                    return false;
                }
            }

            return true;
    }
};