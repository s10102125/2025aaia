///week11-1.cpp
///�禡/��� function
#include <stdio.h>
///�e�� �w�q �禡
///�e�X�ӬOint���
int addnum(int a,int b){ ///�e�i�h��� a �� b
    printf("�b�禡addnum()��,�o��Ѽ�:%d b:%d\n", a, b);
    int ans = a + b ;
    printf("��X���� %d �n return �X�h�@\n",ans);
    return ans; ///�^�� ans ��
}
int main(){ ///�D�n���禡�B�D�{��
    int ans = addnum(2,3); ///��Ӿ�� a, b
    printf("�o�쵪�סG%d\n",ans);
}
