///week03-3.cpp
#include <stdio.h>
int main()
{///從0開始，中間寫多少，就跑多少次
    for(int i=0 ; i<15 ; i++) {
        printf("%d", i);
    }///電腦for迴圈 電腦從0開始
    printf("\n");///跳行

    ///人類比較麻煩。從1開始數
    ///中間寫多少，較跑多少次
    for(int i=1 ; i<=5; i++){
        printf("%d", i);
    }///人的for迴圈 從1開始
}
