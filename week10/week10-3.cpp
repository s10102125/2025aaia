///week10-3.cpp
#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int ans = 0, k = n;
	while(n>0){
		ans = ans * 10 + n%10;
		n /= 10;
	}
	printf("%d+%d=%d\n", k, ans, k + ans);
}
