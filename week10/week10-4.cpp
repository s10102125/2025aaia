// week10-4.cpp
// LeetCode 1399. Count Largest Group
class Solution {
public:
    int countLargestGroup(int n) {
        int a[100] = {}; //硂柑璶 total 瞷碭Ω (ノㄓ参璸 total 瞷Ω计)
        int largest = 0; //魁程ê竤柑Τ碭计?
        for(int i=1; i<=n; i++){ //1...n摸癹伴
            int now = i;
            int total = 0;
            while(now>0){ //ブ猭
                // 癹伴柑р total 癬ㄓ
                total += now %10; //ブ now % 10 р–计 total 柑
                now /= 10; // ブnow跑
            }
            a[total]++; // 癹伴璶参璸 total 瞷Ω计
            if( a[total] > largest ) largest = a[total];
        }
        int ans = 0; //程计êㄇ竤Τ碭竤?
        for(int i=0; i<100; i++){
            if(a[i] == largest) ans++; //狦 a[i] 琌程计ê竤碞竤
        }
        return ans;
    }
};
