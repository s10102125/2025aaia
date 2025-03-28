///week06-3.cpp
///leetcode 1780. Check if Number is a Sum of Powers of Three
///看難卻易，while、if
class Solution {
public:
    bool checkPowersOfThree(int n) {
        while(n>0){ //只要n還有數字，就剝皮，剝掉3的倍數
            ///n%3 會剩下??? 剩1很好，剩0很好，但剩2就bad
            if(n%3==2) return false;
            n=n/3; ///剝掉3的倍數
        }
        return true;
    }
};
