var imgs = [];
var cont = 0;


function preload() {

  for (i=0; i<20; i++) {
	imgs[i] = loadImage("figuras/Andando/Andando ("+i+").png");
  }
}
function setup() {
	frameRate(30);	
	createCanvas(640, 640);
}
function draw() {
	clear(); 
	image(imgs[ cont ],0,0); 
	cont++;
	if (cont >= 20 ) {
		cont = 0; 
	}

}
