//week04-2.py�O���Ѫ�LeetCode�D��Easy�D(�G�X�@)
//Maximum Count of Positive Integers and Negative Integers
//��X ���X�ӥ��� ���X�ӭt�� �j�����Ӧ^��
int maximumCount(int* nums, int numsSize) {
    int pos=0, neg=0;//�j��e���A���O0
    for(int i=0;i<numsSize;i++){
        if(nums[i]>0)pos++;//����
        if(nums[i]<0)neg++;//�t��
    }//�j�餤���A��s�A�ק�L

    //�j��᭱�A�⥦���ӥ�
    if(pos>neg) return pos;//���Ʀh�A�N����
    else return neg;//���M�N�t��
}
