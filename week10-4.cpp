//week10-4 ���Ѫ��D���D(�D�ؤ��n���A���O�{���u�Ψ�W�ұЪ��j��B�}�C�B if)
//LeetCode 1399. Count Largest Group �̽D�����@�s�A���X��? �̤j���ơA���X��?
class Solution {
public:
    int countLargestGroup(int n) {
        int max_count = 0 ;//�Ƥ@�U�A�έp�̦h���A�O�X�{�X��
        int a[100]={};//�}�C�ŧi�C�� �[�`��total ���X�{�X��
        for(int i=1;i<=n;i++){//�H����for�j��A�q1...n
            int total = 0, now = i;//�[�_�Ӫ����G��total�A�{�b����now
            while(now>0){//��֪k ��while�j��A�p�Gnow�٦��ѡA�~���
                total += now%10;//��֥[�_��(�C�@��Ƴ��[�_��)
                now = now/10;//�駹�֡A�Ʀr�ܤp
            }
            a[total]++;//�έp���G�h1��total���[�_�Ӫ���total���ӥ�
            if(a[total]>max_count) max_count = a[total];//max_count��̦h����
        }
        int ans=0;//�̫�䵪�ק�X��(�X�{�̦h���ơA���X�Ӽ�)
        for(int i=0;i<100;i++){//�j��M�}�Ca[i]��n�̤j��max_count����
            if(a[i]==max_count) ans++;//�N�h�@�ӳ̤j����
        }
        return ans;
    }
};
