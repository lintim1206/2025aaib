#week04-2.py�O���Ѫ�LeetCode�D��Easy�D(�G�X�@)
#Maximum Count of Positive Integers and Negative Integers
#��X ���X�ӥ��� ���X�ӭt�� �j�����Ӧ^��
class Solution:
    def maximumCount(self, nums: List[int]) -> int:
        pos=0
        neg=0#�j��e���A�ǳƦn�A����0
        for i in range(len(nums)):#�j��̭��A��s�L
            if nums[i] > 0 : pos+=1
            if nums[i] < 0 : neg+=1
        #�j��᭱�⵪�׮��ӥ�
        return max(pos,neg)
