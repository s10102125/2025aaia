//week09_5_bubble_happy_3
void setup(){
   size(310,430);
}
int [][] a = new int [7] [5]; //Java的陣列
void draw(){
  background(244,244,244);
  strokeWeight(3);
  fill(235,232,227);
  rect(10, 10, 58*5, 58*7, 30);
  for(int i=10+58; i<10+58*7; i+=58){
    line(10, i, 300, i);
  }
  for(int i=0; i<7; i++){ //左手i有7個
    for(int j=0; j<5; j++){ //右手j有5個
      int x = 39 + j*58 , y = 39+i*58; //x對應右手j y左手i
      if(mousePressed && dist(x,y,mouseX,mouseY)<29 && mouseButton==LEFT) a[i][j] = 1;
      if(mousePressed && dist(x,y,mouseX,mouseY)<29 && mouseButton==RIGHT) a[i][j] = 0;
      if(a[i][j]==1) fill(231,173,172);
      else fill(235,232,227);
      ellipse( x, y, 50, 50);
    }
  }
}
