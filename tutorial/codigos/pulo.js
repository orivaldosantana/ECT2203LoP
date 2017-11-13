// identifica o estado do pulo: false, não está acontecendo um pulo
// e true quando está acontecendo  
var pulo = false; 
var yp = 0; // coordendas do pulo
var xdo, ydo; // coordendas da origem do pulo

var contFrames = 0; 

// os códigos de "setup" só executam uma vez 
function setup() {
	createCanvas(640, 480);
	xdo = 50;
	
	ydo = 440;  
}

// os códigos de "draw" executam constantemente 
function draw() {

	// Tratamento das teclas 
	if (keyIsDown(RIGHT_ARROW) ){ 
		xdo = xdo + 5; 
		if ( xdo > width )
			xdo = 0; 
		
	}
		// Tratamento das teclas 
	if (keyIsDown(UP_ARROW) && (! pulo) ){ 
		pulo = true; 
		contFrames = 0; 
		
	}
	// movimentação do pulo 
	
	// se o pulo estiver ativo 
	if (pulo) {
		contFrames++; 
		// movimenta o pulo / tiro 
		yp = 0.5*(contFrames)*(contFrames - 30);
		// se o pulo sumir na tela 
		if (yp > 0) {
			// habilida a ocorrência de um novo pulo 
			pulo = false;
			yp = 0; 
			
		}
	}
	
	// limpa o cenário 
	clear();
	
	// --------------- Desenha o cenário -----------------
	// desenha jogador 
	ellipse(xdo, ydo+yp, 20, 50);
	// desenha pulo 
	// se o pulo estiver ativo 

	
	
}


