class Solution {
public:
    std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::unordered_set<int> numsSet(nums1.begin(), nums1.end());
        std::vector<int> result;

        for (int num : nums2) {
            if (numsSet.count(num)) {
                result.push_back(num);
                numsSet.erase(num);  // Optional: Remove the element from the set to avoid duplicates in the result
            }
        }

        return result;
    }
};