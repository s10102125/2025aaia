///week11-2.cpp
///���F�ѨM SOIT107_ADVANCE_009 �o�D
///�ڭ̵y�L�Ʋߡu��֪k�v
#include <stdio.h>

int main(){
    printf("�п�J1�Ӽ�(ex.183) ");
    int n;
    scanf("%d",&n); ///Ū�Jn
    int ans = 0; ///�Q���u�̤j���֡v
    while(n>0){ ///while �j��A�@�����
        if(n%10 > ans) ans = n%10; ///��j���֡A��s����
        printf("��� %d\n", n%10);
        n /= 10;  ///�駹��,n�ܤp
    }
    printf("�̤j���֬O %d\n",ans);
}
