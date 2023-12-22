from typing import List

class Solution:
    def count_set_bits(self, num):
        count = 0
        while num:
            count += num & 1
            num >>= 1
        return count

    def sumIndicesWithKSetBits(self, nums: List[int], k: int) -> int:
        result = 0
        for i, num in enumerate(nums):
            if self.count_set_bits(i) == k:
                result += num
        return result