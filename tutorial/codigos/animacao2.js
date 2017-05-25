var imgs = [];
var cont = 0;
var xp = 500; 

function preload() {

  for (i=0; i<20; i++) {
	imgs[i] = loadImage("figuras/Andando/Andando ("+i+").png");
  }
}
function setup() {
	frameRate(30);	
	createCanvas(640, 640);
}

function andar_esquerda(){ 
	xp = xp - 30; 
	cont++;
	if (cont >= 20 ) {
		cont = 0; 
	}
	if ( xp < -imgs[cont].width )
		xp = width; 
		
}

function draw() {
	background(255); 
	imageMode(CENTER);  
	image(imgs[ cont ],xp,height/2); 
	
	if (keyIsDown(LEFT_ARROW) ) {
		andar_esquerda(); 
	}
}
