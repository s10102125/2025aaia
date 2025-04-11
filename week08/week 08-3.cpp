//week08-3
// leetcode 2843
//從low...high 的數字中，找到「切一半」左邊加起來 == 右邊加起來

class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int ans = 0; //迴圈前面 ans 是 0
        for(int i=low; i<=high; i++){
            int a = i / 1000;   //千位數(實習課 第6週 基礎題)
            int b = i / 100 % 10; //百位數
            int c = i / 10 % 10; //十位數
            int d = i % 10; //個位數
            if( 11<=i && i<=99 && c==d) ans++; //2位數
            if(1000 <= i && i<= 9999 && a+b==c+d) ans++; //4位數
        } //迴圈中間 ans++
        return ans; //迴圈後面，把ans拿來用
    }
};
