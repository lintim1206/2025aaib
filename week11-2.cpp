///week11-2.cpp
///�禡�ŧi�B�禡�w�q�B�禡�I�s(���/�禡)
#include <stdio.h>

int addnum(int a, int b)///�ŧi��ӰѼƪ��Ϊ��B�W�r
{///�e���O ���/�禡 ���w�q
    printf("�{�b�i�Jaddnum() �禡�̡Aa:%d b:%d\n",a ,b);
    int x;
    x= a+b;
    printf("��Ƭۥ[��A�o��ƭ�%d�Nreturn�^��\n",x);
    return x;///�^�ǵ����n�Ϊ��a��
}

int main()
{
    int ans = addnum(10,30);///�ڭ̨ϥ�/�I�s��� �ۭq�禡
    printf("%d", ans);
}
