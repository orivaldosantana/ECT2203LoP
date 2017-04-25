function lerTexto(x) {
	return document.getElementsByName(x)[0].value;
}
function escreva(x) {
	return alert(x);
}
function escreva(l,x) {
	document.getElementById(l).innerHTML = x; 
}

function lerInteiro(x) {
	return parseInt( document.getElementsByName(x)[0].value );
}
function lerReal(x) {
	return parseFloat(document.getElementsByName(x)[0].value);
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

