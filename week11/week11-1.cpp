///week11-1.cpp
///函式/函數 function
#include <stdio.h>
///前面 定義 函式
///送出來是int整數
int addnum(int a,int b){ ///送進去整數 a 跟 b
    printf("在函式addnum()裡,得到參數:%d b:%d\n", a, b);
    int ans = a + b ;
    printf("算出答案 %d 要 return 出去哦\n",ans);
    return ans; ///回傳 ans 值
}
int main(){ ///主要的函式、主程式
    int ans = addnum(2,3); ///對照整數 a, b
    printf("得到答案：%d\n",ans);
}
