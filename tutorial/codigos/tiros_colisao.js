
var tamMenor = 10;
var tamMaior = 50;

var x = 0; 

var xTiros = [];  
var tirosAtivos = []; 
var qtTiros =  5;
var y = [];
var tempoTiro = -1;   

// os códigos de "setup" só executam uma vez 
function setup() {
	createCanvas(640, 480);   
	frameRate(30); 
	for ( i = 0; i < qtTiros; i++) {
		xTiros[i] = 10;
		tirosAtivos[i] = false;  
		y[i] = 300; 
	}
	

	
}

// os códigos de "draw" executam constantemente 
function draw() {
  background(0); 

 
	
  if ( keyIsDown(RIGHT_ARROW) && tempoTiro < 0 ) {
	tempoTiro = 5;   
  
	for ( i = 0; i < qtTiros; i++) {
		if ( tirosAtivos[i] ==  false ) {
		  tirosAtivos[i] = true;
		  xTiros[i] = 100;
		  break; 
		    
		} 
	} 
	  
  }
  tempoTiro--;  
	
  textSize(18)
  text(tempoTiro,100,100); 
  
  for ( i = 0; i < qtTiros; i++) {
	  if ( tirosAtivos[i] ) {
		// tiros 
		ellipse(xTiros[i], y[i], tamMenor, tamMenor);		    
		xTiros[i] += 10; 
		if (xTiros[i] > width) {
			tirosAtivos[i] = false; 
		}
	  } 
	 
  }
  
  
  

}
