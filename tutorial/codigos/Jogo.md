# Explicando Jogo.js
##### Como ainda estamos entendendo como funciona a biblioteca p5 começaremos com um código bem simples.
##### Esse código contém duas funções: setup e draw.

```javascript
function setup() {
  
}
```

A setup está sem comando, ou seja, não está sendo executado nada em seu interior.

```javascript
function draw() {
  ellipse(50, 50, 80, 80);
}
```

Já a função draw tem uma linha de comando.

```javascript
  ellipse(50, 50, 80, 80);
```

Essa linha cria uma ellipse, com os seguintes parâmetros:

> ellipse(**Coordenada X**, **Coordenada Y**, **Largura**, **Altura**);

Para mais informações sobre essa função: https://p5js.org/reference/#/p5/ellipse
