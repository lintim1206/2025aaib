#week04-1.py    �G�X�@ Python for�j�骩��(���@�U�Χ�²�檩��)
#leetCode 2579. Count Total Number of Colored Cells
class Solution:
    def coloredCells(self, n: int) -> int:
        ans=0 #�j��e���Aans���M��
        for i in range(1,n*2,2): #Python �� for �j��
            ans+=i #��o��1,3,5,7���ơA�[�Jans
        for i in range(1,n*2-1,2):
            ans+=i #��o��1,3,5,7���ơA�[�Jans
        return ans
