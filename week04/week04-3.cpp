///week04-3

int main(){
    int n=5;
    for(int i=0;i<n;i++){
        printf("%d ",i);
    }//電腦從0開始
    printf("\n");

    for(int i=1; i<=n; i++){
        printf("%d ",i);
    }//電腦從1開始
    printf("\n");

    for(int i=n-1; i>=0; i--){
        printf("%d ",i);
    }//倒過的迴圈
}