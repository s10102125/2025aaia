// week14-4.cpp
//(UVA11063) B2-Sequence
//Part 1:Input Part 2: Output
# include <stdio.h>
int main(){
    int a[100];
    int N, t=1;
    while(scanf("%d",&N) ==1){//Part 1: Part 1
    int bad = 0; //Part 3: bad or not bad
        for(int i=0; i<N; i++){ //Part 1: Part 1
            scanf("%d",&a[i]); //Part 1: Part 1
            if(i>0 && a[i-1] >= a[i]) bad = 1; //Part 5: bigger-bigger
        }
        if(a[0]<1) bad = 1; //Part 3

        //Part 2: Output
        if(bad==0) printf("Case #%d: It is a B2-Sequence.\n\n",t);
           else printf("Case #%d: It is not a B2-Sequence.\n\n",t);
        t++;

    }
}
