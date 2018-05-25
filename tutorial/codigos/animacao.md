# Explicando animacao.js
##### Código com 3 funções: *preload*, *setup* e *draw*.

```javascript
var imgs = [];
var cont = 0;
```
Primeiramente são declarados as chamadas variáveis globais. 
Um vetor para guardar as imagens e 
um contador para contador quantos laços a função *draw* faz.  

```javascript
function preload() {
  for (i=0; i<20; i++) {
	imgs[i] = loadImage("figuras/Andando/Andando ("+i+").png");
  }
}
```

Função criada para carregar imagens do personagem andando.

```javascript
   imgs[i] = loadImage("figuras/Andando/Andando ("+i+").png");
```

Como são várias imagens à serem carregadas atribuímos a cada posição do vetor 
uma imagem. Para carregar as imagens é utilizado a função *loadImage* que 
tem como parâmetros o endereço da imagem, especificando também o tipo da imagem.

Informações sobre *loadImage*:  https://p5js.org/reference/#/p5/loadImage

```javascript
function setup() {
	frameRate(30);	
	createCanvas(640, 640);
}
```
A próxima função é a *setup*, como sabemos ela é utilizada como a inicializaão do programa.

```javascript
	frameRate(30);	
```
A *frameRate* básicamente especifica a quantidade de frames que são mostrados 
a cada segundo. Nesse caso estamos atualizando 30 vezes por segundo.

Informações sobre *frameRate*: https://p5js.org/reference/#/p5/frameRate

```javascript
	createCanvas(640, 640);
```
A *createCanvas* cria uma tela para desenho. Se você não colocá-la no 
seu jogo por padrão o tamanho da tela será 100x100 pixels.

 >createCanvas(**Largura**, **Altura**);

```javascript
function draw() {
	clear(); 
	image(imgs[ cont ],0,0); 
	cont++;
	if (cont >= 20 ) {
		cont = 0; 
	}
```

A próxima função executada é a *draw*, como já sabemos ela se comporta como um *while* infinito.

```javascript
  clear(); 
```

A *clear* basicamente limpa os pixels da tela (Canvas).
Informações sobre *clear*: https://p5js.org/reference/#/p5/clear

```javascript
  image(imgs[ cont ],0,0);
```

A *image* desenha uma imagem já carregada. Nesse caso, 
estamos desenhando uma imagem que está armazenada 
em um vetor (imgs). Essa função tem como parâmetros:

  >image( **Imagem**, **Coordenada X**, **Coordenada Y**);

A *image* pode conter outros parâmetros além dos citados acima, 
para encontrar mais informações: https://p5js.org/reference/#/p5/image
 
```javascript
  cont++;
	if (cont >= 20 ) {
		cont = 0; 
	}
```
O contador que foi declarado no início do código é incrementado dentro 
da função *draw* para fazer tipo um ciclo com as imagens. Temos um total de 20 
imagens, ou seja, 20 posições do vetor *imgs* com imagens armazenadas. Dessa forma, 
já que o *cont* é o índice do vetor *imgs* quando o *cont* chegar em 20 as 
imagens acabam, para esse problema utilizamos o *if* para que recomece a desenhar 
as imagens da posição Zero. Assim, criamos então a animação utilizando imagens.



