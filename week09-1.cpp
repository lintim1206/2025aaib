///week09-1.cpp
///��ܱƧǪk Selection Sort
#include <stdio.h>
int main()
{///�}�C�ŧi�A�Τj�A������l��
    int a[10]={9,8,7,6,4,3,5,1,0,2};

    for(int i=0;i<10;i++) printf("%d ", a[i]);
    printf("\n");

    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(a[i]>a[j]){
               int temp=a[i]; a[i]=a[j]; a[j]=temp;
            }
        }
        printf("�{�b�Ʀn�F %d\n", a[i]);///��Ʀn���Ʀr�L�X��
    }
}

