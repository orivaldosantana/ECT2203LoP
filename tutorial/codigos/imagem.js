var img;

function preload() {
	
  
	img = loadImage("figuras/Andando/Andando (0).png");
}

function setup() {
	createCanvas(640, 640);
}

function draw() {
	image(img,0,0); 
}
