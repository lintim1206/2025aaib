//week11-4.cpp
//LeetCode 1295. Find Numbers with Even Number of Digits
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;//�j��e�� ans �O 0
        for(int i=0;i<nums.size();i++){
            int now = nums[i];//�{�b�B�z num[i]
            //Q: �p�󪾹D num[i] �O�X���?

            int digits = 0;//���X���?
            while(now>0){//�ΤW�g�йL�A���ѤS�g�F2-3������֪k
                digits++;//�@��Ƥ@�U �A��F�X��
                now = now/10;//�Ʀr�V��V�p
            }
            if(digits%2==0) ans++;//�j��̡A���ƪ���ƮɡAans++
        }
        return ans;//�j��᭱ ans ���ӥ�
    }
};
