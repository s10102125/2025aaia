//week03-1.cpp C++
//LeetCode 2579.
class Solution {
public:
    long long coloredCells(int n) {
        long long ans=n; //要多寫這行，把數字升級，變成64位元，「很長很長的整數」
        return ans*ans+(ans-1)*(ans-1); //C/C++/Java/C#都要加分號
    }
};
