///week15-2.cpp
///�M���ɡA�[��e�訮�P�A�o�{�n���ܭ��ƪ��Ʀr
///�����ƪ��Ʀr�A���v���h��? �g�{������
#include <stdio.h>
int helper(int n)
{
    int a[10] = {};///�έp��A�̭����O0
    while(n>0){///��֪k
        int now = n%10;///��X�@�h��
        a[now]++;///�o�ӥ֡A�h�X�{�@��
        if(a[now] > 1 ) return 1;///����쭫�Ъ��Ʀr
        n = n / 10;///��֪k
    }
    return 0;///���S�����������A�N�O�䤣�쭫�ƪ��Ʀr �S��
}///helper()�^�� 0 �N��S�����A �^�� 1 �N�����
int main()
{
    int ans = 0;///���X�ӭ��ƪ��Ʀr?
    for(int i=0; i<=9999; i++){///0000 .. 9999
        if(helper(i)==1) ans++;
    }
    printf("%d", ans);///��Ӧ�4725�Ө��P���X�A�����ƪ��Ʀr
}
