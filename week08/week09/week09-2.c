//week09-2
# include <stdio.h>
int main(){
    int a[100];
    for(int i=0; i<100; i++){
        scanf("%d",&a[i]);
    }
    for(int i=0; i<100; i++){ //左手i
        for(int j=i+1; j<100; j++){ //右手j
            if(a[i]>a[j]){ //大小不對就交換
                int k=a[i]; //就交換
                a[i]=a[j];
                a[j]=k;
            }
        }
    }
    for(int i=0; i<100; i++){
        printf("%d ",a[i]);
    }
}
