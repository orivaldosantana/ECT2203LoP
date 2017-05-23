// identifica o estado do disparo: false, não está acontecendo um disparo
// e true quando está acontecendo  
var disparo = false; 
var xd, yd; // coordendas do disparo
var xdo, ydo; // coordendas da origem do disparo
  

// os códigos de "setup" só executam uma vez 
function setup() {
	createCanvas(640, 480);
	xdo = 50;
	
	ydo = 440;  
}

// os códigos de "draw" executam constantemente 
function draw() {

	// Tratamento das teclas 
	if (keyIsDown(RIGHT_ARROW) && (! disparo) ){ 
		disparo = true; 
		xd = xdo; 
		
	}
	// movimentação do disparo 
	
	// se o disparo estiver ativo 
	if (disparo) {
		// movimenta o disparo / tiro 
		xd = xd +5;
		yd = 0.005*(xd - xdo)*(xd - 300);
		// se o disparo sumir na tela 
		if (xd > width  || yd > 100) {
			// habilida a ocorrência de um novo disparo 
			disparo = false; 
			
		}
	}
	
	// limpa o cenário 
	clear();
	
	// --------------- Desenha o cenário -----------------
	// desenha jogador 
	ellipse(xdo, ydo, 20, 50);
	// desenha disparo 
	// se o disparo estiver ativo 
	if (disparo) {
		// desenha a elipse / disparo 
		ellipse(xd,ydo + yd,8,8);
		
	}
	
	
}


