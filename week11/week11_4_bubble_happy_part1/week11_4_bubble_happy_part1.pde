//week11_4_bubble_happy_part1
//修改自 week10_1_bubble_happy_part2 (可在github 2025aaia 整個下載zip)
PImage happy1, happy2, happy3; //第三張圖
PImage [] happy = new PImage[200]; //200張小Java 的陣列宣告，有200格
int N = 0; //目前only 0張
int []x = new int [200]; //200 個 x 座標
int []y = new int [200]; //200 個 y 座標
void setup(){
  size(600,675); //大小跟圖片一樣喔!
  happy1 = loadImage("happy1.jpg");
  happy2 = loadImage("happy2.jpg");
}
void mousePressed(){
  happy[N] = happy2.get(mouseX-30,mouseY-30,60,60);
  x[N]= mouseX; //記下「要放小圖」的位置
  y[N]= mouseY; //記下「要放小圖」的位置
  N++;//現在正式多了一個小圖
}
void draw(){
  background(happy1);
  for(int i=0; i<N; i++){
   image( happy[i],x[i]-30,y[i]-30); 
  }
}
