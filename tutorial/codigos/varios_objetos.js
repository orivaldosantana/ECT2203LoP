


var estrelasX = [];
var estrelasY = [];
var estrelasVel = [];
var estrelasTam = [];    

var qtEstrelas = 50; 

// os códigos de "setup" só executam uma vez 
function setup() {
	createCanvas(640, 480); 
	frameRate(30);   
	for (i = 0; i < qtEstrelas; i++) {
		estrelasX[i] = random(0,width);
		estrelasY[i] = random(0,height); 
		estrelasVel[i] = 2+random(0,10)/10; 
		estrelasTam[i] = random(2,4); 
	} 
}

// os códigos de "draw" executam constantemente 
function draw() {
  background(0); 

  // desenha objetos 
  for(i = 0; i < qtEstrelas; i++) {
	  rect(estrelasX[i],estrelasY[i],estrelasTam[i],estrelasTam[i])
  }
  
  // movimenta objetos 
  for(i = 0; i < qtEstrelas; i++) { 
	  estrelasY[i] = estrelasY[i] + estrelasVel[i]; 
	  if (estrelasY[i] > height) {
		estrelasX[i] = random(0,width);
		estrelasY[i] = -random(0,height); 		  
	  }
  }
  
  
}
