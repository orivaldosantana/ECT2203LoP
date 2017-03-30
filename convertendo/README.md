# JavaScript

Esta página trata da conversão das instruções de algoritmos vistos em aula para a linguagem JavaScript. Logo, para cada instrução de um algoritmo será apresentada seu equilavente em JavaScript.

## Comandos de Entrada

Entre com um valor inteiro:
```javascript
valor = lerInteiro("Entre com um número inteiro: ");
```

Entre com um valor real:
```javascript
valor = lerReal("Entre com um número real: ");
```

Entre com um texto:
```javascript
nome = lerTexto("Entre com um nome: ");
```
ou
```javascript
nome = prompt("Entre com um nome: ");
```

Convertendo de texto par inteiro
```javascript
numero = parseInt(texto);
```

Convertendo de texto par real
```javascript
numero = parseFloat(texto);
```
## Comandos de Saída

Escrevendo uma mensagem na tela:
```javascript
numero = escreva(texto);
```
ou
```javascript
numero = alert(texto);
```

Dica, você pode concatenar (juntar) textos, textos e números com o operador +
```javascript
("O valor do número é "+variavelNumero)
```

## Operadores Aritméticos

* Soma de a com b: `a + b`
* Subtração de a e b: `a - b`
* Multiplicação de a vezes b: `a * b`
* Divisão de a por b: `a / b`
* Divisão inteira de a por b: `divisaoInteira(a,b)` ou `Math.floor(a/b)`
* Resto da divisão de a por b: `a % b`
* Portência, base elevado ao expoente: `potencia(base,expoente)` ou `Math.pow(base,expoente)`
* Raiz quadrada de x: `raizQuadrada(x)` ou `Math.sqrt(x)`


## Operadores Lógicos

* Função lógica OU de a e b: `a || b`
* Função lógica E de a e b: `a && b`
* Função lógica de NEGAÇÂO de a: ` ! a`

## Estruturas Condicionais 

### Estrutura Condicional Simples 

Se **expresão lógica** for verdadeira então execute os **comandos**
```JavaScript
if ( expressão ) {
  // comandos 
}
```
### Estrutura Condicional Composta

*Se* **expresão lógica** for verdadeira então execute os **comandos**, *caso contrário* execute **outros comandos** 
```JavaScript
if ( expressão ) {
  // comandos 
}
else {
  // outros comandos 
}
``` 
## Estruturas de Repetição 

### Laço **while**

* *Enquanto* **expressão lógica** for verdeira execute os **comandos**. 
```JavaScript
while ( expressão ) {
  // comandos 
}
```

### Laço **do while 

* Execute os **comandos**, *Enquanto* **expressão lógica** for verdeira. 
```JavaScript
do { 
  // comandos 
} while ( expressão ); 
```


## Aviso Imporatante

As funções `divisaoInteira`, `potencia`, `raizQuadrada`, `lerInteiro`, `lerReal`, `lerTexto` e `escreva` só funcionarão se o arquivo .html possuir a chamada para o aquivo _ect.js_. Note que o arquivo _ect.js_ deve estar na mesma pasta que o seu arquivo html contendo o seu código em JavaScript.

Exemplo:
```html
...
<script src="ect.js"></script>
...
```

Mais informações acessar acessar a primeira aula de laboratório: [https://github.com/orivaldosantana/ECT2203LoP ](https://github.com/orivaldosantana/ECT2203LoP/tree/master/lab0).
