class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        cur,top = 0,0
        for i in nums:
            if i == 1:
                cur +=1
            else:
                if cur > top :
                    top = cur
                cur = 0
        return max(cur,top)