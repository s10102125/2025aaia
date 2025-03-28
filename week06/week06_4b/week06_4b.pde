///week06_4b
void setup(){
   size(600,400);
}
float []x=new float[100];//有100個X和100個Y
float []y=new float[100]; //Java的陣列宣告
int N=0; //飼料有N個
void draw(){
   background(#C0FFEE);
   for(int i=0; i<N;i++){
     ellipse(x[i],y[i],8,8);
     y[i] +=2;
     if(y[i]>400){
       for(int k=i;k<N-1; k++){
        x[k]=x[k+1];
        y[k]=y[k+1];
       }
       N--; //回收完1科飼料
   }
   println(N); //把N在小黑印出來
  }
}
void mousePressed(){
   x[N]=mouseX;
   y[N]=mouseY;
   N++;
}
