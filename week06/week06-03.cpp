///week06-3.cpp
///leetcode 1780. Check if Number is a Sum of Powers of Three
///�����o���Awhile�Bif
class Solution {
public:
    bool checkPowersOfThree(int n) {
        while(n>0){ //�u�nn�٦��Ʀr�A�N��֡A�鱼3������
            ///n%3 �|�ѤU??? ��1�ܦn�A��0�ܦn�A����2�Nbad
            if(n%3==2) return false;
            n=n/3; ///�鱼3������
        }
        return true;
    }
};
