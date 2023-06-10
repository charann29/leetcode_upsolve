class Solution {
public:
int findDuplicate(vector<int>& nums) {
    int slow = nums[0];
    int fast = nums[0];

    // Find the intersection point of two pointers
    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    // Move one pointer to the start and another at the intersection point
    slow = nums[0];
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }

    return slow;
}

};