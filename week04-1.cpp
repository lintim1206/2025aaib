//week04-1.ccp C++�y���� ������
//leetCode 2579. Count Total Number of Colored Cells
class Solution {
public:
    long long coloredCells(int n) {
        long long ans =n;

        return ans*ans+(ans-1)*(ans-1);
    }//�j�����-�p�����
};
