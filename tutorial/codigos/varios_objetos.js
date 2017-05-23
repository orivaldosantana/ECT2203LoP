
var tam = 10;

var vX = [];
var vY = [];
var vV = [];
var vTam = [];    

var qt = 40; 

// os códigos de "setup" só executam uma vez 
function setup() {
	createCanvas(640, 480); 
	frameRate(30);   
	for (i = 0; i < qt; i++) {
		vX[i] = random(0,width);
		vY[i] = random(0,height); 
		vV[i] = 2+random(0,10)/10; 
		vTam[i] = random(2,4); 
	} 
}

// os códigos de "draw" executam constantemente 
function draw() {
  background(0); 

  // desenha objetos 
  for(i = 0; i < qt; i++) {
	  rect(vX[i],vY[i],vTam[i],vTam[i])
  }
  
  // movimenta objetos 
  for(i = 0; i < qt; i++) { 
	  vY[i] = vY[i] + vV[i]; 
	  if (vY[i] > height) {
		vX[i] = random(0,width);
		vY[i] = -random(0,height); 		  
	  }
  }
  
  
}
