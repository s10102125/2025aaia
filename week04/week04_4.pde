///week04_4_float_x_y_if_mousePressed_x_y
void setup(){
   size(600,400); 
}
float x=300,y=200;
void draw(){
  background( #C0FFEE ); //不是COFFEE 是C0FFEE
  ellipse(x,y,8,8);
  if(mousePressed){
     x=( x + mouseX)/2;
     y=( y + mouseY)/2;
  }
}
