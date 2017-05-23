
var tamMenor = 10;
var tamMaior = 50;

var x = 0;  

// os códigos de "setup" só executam uma vez 
function setup() {
	createCanvas(640, 480);   
}

// os códigos de "draw" executam constantemente 
function draw() {
  background(0); 

  x=x+2; 
  if (dist(width/2, height/2,x, height/2) < (tamMenor + tamMaior)/2) {
	  fill(255,255,0);
	  ellipse(width/2, height/2, tamMaior, tamMaior);  
	  fill(255,255,255);	  
  } else  {
	  ellipse(width/2, height/2, tamMaior, tamMaior);  
  }
  
  ellipse(x, height/2, tamMenor, tamMenor);
  
  
  if (x > width) 
	x = 0;

}
