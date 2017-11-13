
 var tela = 1; 
 var vidas = 3; 
 var cont; 

// os códigos de "setup" só executam uma vez 
function setup() {
	createCanvas(640, 480);
	frameRate(30); 

	cont = 30*3; 
}
// os códigos de "draw" executam constantemente 
function draw() {

	background(0);

	

	if ( tela == 1 ) {
		textSize(28); 
		fill(200);
		text("Pressione Enter para Começar", 100, 200);
		if ( keyIsDown(13) ) 
			tela = 2; 
		

	}
	if ( tela == 2 ) {
		
		

		cont--; 		
		textSize(36); 
		fill(255,255,100);
		text("Tela do Jogo", 100, 200);
		text("Vidas: "+vidas, 100, 300);
		if ( cont < 0 ) {
			vidas--;
			cont = 30*3;  
		}
			
		
		if ( vidas == 0 ) 
			tela = 3; 
	}
	if ( tela == 3 ) {
		
		textSize(36); 
		fill(255,100,100);
		text("Fim de jogo", 100, 200);
		
	} 
	
	
}


