class Solution {
public:
   int minSwapsCouples(vector<int>& row) {
    int n = row.size() / 2; // Number of couples
    vector<int> position(row.size());

    // Build the position map to store the seat position of each person
    for (int i = 0; i < row.size(); i++) {
        position[row[i]] = i;
    }

    int swaps = 0;
    for (int i = 0; i < row.size(); i += 2) {
        int partner = row[i] ^ 1; // Get the partner of the current person
        if (row[i + 1] != partner) {
            // If the partner is not sitting next to the current person
            int partnerIdx = position[partner];
            // Swap the partner with the next person
            swap(row[i + 1], row[partnerIdx]);
            // Update the position map
            position[row[partnerIdx]] = partnerIdx;
            position[row[i + 1]] = i + 1;
            swaps++;
        }
    }

    return swaps;
}

};