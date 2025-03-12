#week04-2.py是今天的LeetCode挑戰Easy題(二合一)
#Maximum Count of Positive Integers and Negative Integers
#找出 有幾個正數 有幾個負數 大的那個回傳
class Solution:
    def maximumCount(self, nums: List[int]) -> int:
        pos=0
        neg=0#迴圈前面，準備好，都放0
        for i in range(len(nums)):#迴圈裡面，更新他
            if nums[i] > 0 : pos+=1
            if nums[i] < 0 : neg+=1
        #迴圈後面把答案拿來用
        return max(pos,neg)
