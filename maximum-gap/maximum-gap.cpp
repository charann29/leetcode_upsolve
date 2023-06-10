class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();
        if (n < 2) {
            return 0;
        }

        // Find the minimum and maximum elements in the array
        int minNum = INT_MAX, maxNum = INT_MIN;
        for (int num : nums) {
            minNum = min(minNum, num);
            maxNum = max(maxNum, num);
        }

        // Calculate the size of each bucket
        int bucketSize = max(1, (maxNum - minNum) / (n - 1));

        // Calculate the number of buckets
        int numBuckets = (maxNum - minNum) / bucketSize + 1;

        // Initialize the buckets with min and max values
        vector<int> minBucket(numBuckets, INT_MAX);
        vector<int> maxBucket(numBuckets, INT_MIN);

        // Update the min and max values for each bucket
        for (int num : nums) {
            int bucketIndex = (num - minNum) / bucketSize;
            minBucket[bucketIndex] = min(minBucket[bucketIndex], num);
            maxBucket[bucketIndex] = max(maxBucket[bucketIndex], num);
        }

        // Calculate the maximum gap
        int maxGap = 0;
        int prevMax = minNum;
        for (int i = 0; i < numBuckets; i++) {
            // Skip empty buckets
            if (minBucket[i] == INT_MAX && maxBucket[i] == INT_MIN) {
                continue;
            }
            maxGap = max(maxGap, minBucket[i] - prevMax);
            prevMax = maxBucket[i];
        }

        return maxGap;
    }
};
