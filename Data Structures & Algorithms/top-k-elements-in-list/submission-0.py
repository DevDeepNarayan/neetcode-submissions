class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        res = {}
        frequency = [[] for i in range(len(nums) + 1)]
        output = []

        for i in nums:
            if i in res:
                res[i] += 1
            else:
                res[i] = 1

        for keys, values in res.items():
            frequency[values].append(keys)

        for i in range(len(frequency) - 1, 0, -1):
            for item in frequency[i]:
                output.append(item)

                if len(output) == k:
                    return output