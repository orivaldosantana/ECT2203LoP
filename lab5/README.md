Escola de Ciências e Tecnologia – UFRN
Informática Fundamental
Prof.: Hugo Melo
			
					Lista de exercícios
						Vetores


					Exercícios de fixação

1. Implemente um programa que:
	a) Declare um vetor que recebe 12 inteiros.
	b) A primeira, terceira e décima posições do vetor devem receber o valor 108.
	c) A segunda posição deve receber o valor da primeira posição menos 8. E a quarta
	posição deve receber o valor da terceira posição mais 6.
	d) A posições de índice par a partir da quinta posição devem receber, na ordem: 11, 32,
	33 e 87.
	e) As posição 5 deve guardar 5 mais 3 vezes o valor da sétima posição. A posição 7 deve
	guardar este valor mais 10.
	f) O valor 72 deve ser inserido na posição dada pelo valor da quinta posição.
	g) A posição 4 recebe o valor da oitava posição.
	h) Troque os valores da sexta e décima primeira posições.
	i) Troque os valores das posições 0 e 8.


2. Implemente um programa que declara um vetor que recebe 10 números reais. Em seguida o programa deve receber um
 número real R, tal que -7 <= R <= 7, e armazenar em cada posição do vetor
 o valor i elevado a R  , em que i é o índice da posição do vetor e R é o número dado pelo
usuário. Ao final, o programa deve escrever o vetor.

3. Implemente um programa que recebe N números reais não-negativos e
calcula a raiz quadrada de cada um deles. Organize o seu programa em
entrada, processamento e saída.

4. Implemente um programa que recebe dois vetores de números reais, v1 e
v2, onde cada vetor irá receber 4 números. O programa deve gerar um
vetor v3, que armazena a soma dos elementos correspondentes dos
vetores v1 e v2. Ou seja, a soma dos elementos de mesmo índice. Ao final
o programa deve escrever os elementos de v3.

5. Implemente um programa que inicializa um vetor de inteiros com sua
matrícula, de maneira que cada dígito da sua matrícula seja armazenada
em uma posição do vetor. Em seguida o programa deve receber um número
natural N entre 0 e 9 e determinar em quais posições do vetor N ocorre.

6. Implemente um programa que recebe o número e peso de N bois. O
programa deve calcular e imprimir a média de peso dos bois e os números
dos bois mais pesado e mais leve.

7. Implemente um programa que imprime os 30 primeiros termos da sequência
de Fibonacci.


					Exercícios complementares


8. Implemente um programa que recebe um número positivo ímpar N (N >= 3)
referente ao tamanho de um vetor de inteiros. Em seguida o programa deve
receber o vetor, calcular e imprimir:
	1. O produto dos números que estão na primeira posição, na posição do meio e na última
	posição do vetor.
	2. A média dos números que estão em posições inferiores à posição do meio do vetor.
	3. Quantos dos números que estão em posições superiores à posição do meio do vetor
	são divisíveis por 5 mas não por 2.

9. Em uma competição de saltos ornamentais, os atletas realizam uma série
de saltos acrobáticos que são avaliados por 5 juízes. A cada salto, cada juiz
atribui uma nota de 0,0 a 10,0. A nota do atleta para cada salto é dada pela
média das notas dos juízes, excluindo-se a nota mais baixa e a nota mais
alta. Implemente um programa que recebe as notas dadas por 5 juízes a um
salto e calcula a nota que o atleta recebeu por ele.

10. Implemente um programa que recebe dois vetores de números reais, A e B,
onde A  recebe 7 números e B recebe 5. Em seguida o
programa deve concatenar os vetores, gerando um vetor C. O vetor
resultante C terá tamanho 12, e seus elementos são formados pelos
elementos de A seguidos pelos elementos de B. Por exemplo: para A = {1,
2, 3, 4, 5, 6, 7} e B[5] = {10, 20, 30, 40, 50}, a concatenção de A e B resulta
em C = {1, 2, 3, 4, 5, 6, 7, 10, 20, 30, 40, 50}.

11. Implemente um programa que recebe dois vetores de números reais, A e B,
onde ambs recebem 5 números. Em seguida o programa deve
intercalar os vetores, gerando um vetor C. O vetor resultante C terá
tamanho 10, e seus elementos são formados pelos elementos de A e B
alternados, começando pelo vetor A. Por exemplo: para A = {1, 2, 3, 4, 5} e
B = {10, 20, 30, 40, 50}, a intercalação de A e B resulta em C = {1, 10, 2, 20,
3, 30, 4, 40, 5, 50}.

12. Implemente um programa que recebe um vetor de números inteiros
positivos, entrada, com capacidade para 20 números. Em seguida o
programa deve separar esse vetor, gerando os vetores pares e impares. O
vetor resultante pares deve armazenar os valores de entrada que são
pares. De forma análoga, o vetor resultante impar deve armazenar os
valores ímpares de entrada. O capacidade de pares e impares deve ser 20,
mas não necessariamente esses vetores estarão preenchidos. Nesse caso,
deve usar o valor 0 representando que aquela posição está “vazia”. Por
exemplo: para entrada = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 22,
24, 26, 28, 30}, a separação resulta em pares = {2, 4, 6, 8, 10, 12, 14, 16,
18, 20, 22, 24, 26, 28, 30, 0, 0, 0, 0, 0} e impares = {1, 3, 5, 7, 9, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}.

13. Implemente um programa que recebe 10 números inteiros e os armazena
em um vetor. Em seguida, o programa recebe um número indeterminado de
vezes três valores inteiros O, P e U. O valor O indica a ordem em que o
vetor será escrito (1 – normal, 2 – inversa), P representa a ordem do
primeiro número (de acordo com a ordem definida em O) a ser escrito,
enquanto U representa a ordem do último. Considere que 1 <= P <= U <=
10 e que o programa se encerra quando é dado o valor 0 (zero) para O.
Por exemplo: para vetor[10] = {60, 30, 100, 50, 10, 90, 20, 40, 80, 70}, O =
1, P = 3 e U = 7, a saída esperada é “100 50 10 90 20”. Veja que 100 é o 3o
numero e 20 é o 7o número na ordem normal. Para o mesmo vetor, O = 2, P
= 3 e U = 7, a saída é “40 20 90 10 50”, uma vez que 40 é o 3o número na
ordem inversa e 50 é o 7o.


				Exercícios avançados

14. Modifique o programa da questão 6 de maneira a concatenar 3 vetores com
capacidades M, N e O, em que M, N e O são valores dados pelo usuário.

15. Modifique o programa da questão 7 de maneira a intercalar 2 vetores com
capacidades M e N, em que M e N são valores dados pelo usuário.

16. Implemente um programa que recebe um número inteiro positivo N menor
que 1024 e o converte para número binário. Utilize um vetor de inteiros com
capacidade 10 para representar o número binário. Cada posição do vetor
armazenará um bit (0 ou 1 na base binária).

17. Implemente um programa que recebe um valor N correspondente ao
tamanho de um vetor de inteiros com no máximo 30 elementos (o programa
deve verificar se o valor de N é válido). Em seguida o programa deve
receber e armazenar, no vetor, N números inteiros em ordem não
decrescente. Feito isso, o programa deve:
a) calcular e imprimir, para cada número do vetor, quantas vezes ele se repete.
b) criar um segundo vetor que vai receber os valores do primeiro vetor, mas sem
valores repetidos.

19. Implemente um programa que recebe dois valores inteiros N e M referentes
aos tamanhos de dois vetores A e B. Em seguida, o programa deverá
receber N valores em ordem crescente e armazenar no vetor A e M valores
em ordem decrescente e armazenar no vetor B. Finalmente, o programa
deve criar um vetor C, de tamanho máximo N + M, que armazena os
valores dos vetores A e B em ordem crescente e sem repetições. As
posições restantes de C que não possuem valor válido devem receber zero.

