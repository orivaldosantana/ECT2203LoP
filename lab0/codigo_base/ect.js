function lerTexto(x) {
	return prompt(x);
}
function escreva(x) {
	return alert(x);
}
function lerInteiro(x) {
	return parseInt(prompt(x));
}
function lerReal(x) {
	return parseFloat(prompt(x));
}
function raizQuadrada(x){
	return Math.sqrt(x);
}
function potencia(b,e){
	return Math.pow(b,e); 
}
function divisaoInteira(x,y) {
	return Math.floor(x/y);
}

// Retorna um  número inteiro entre min (incluso) e max (incluso)
// Usando Math.round() vai lhe dar uma distribuição não uniforme!
// Referência: https://developer.mozilla.org/pt-BR/docs/Web/JavaScript/Reference/Global_Objects/Math/random 
function aleatorio(min,max) {
	return Math.floor(Math.random() * (1+max - min)) + min;	
}

