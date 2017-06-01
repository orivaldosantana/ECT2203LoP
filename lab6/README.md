Escola de Ciências e Tecnologia – UFRN
Informática Fundamental
Prof.: Hugo Melo
					Lista de exercícios
					Vetores – strings

DICA:  Utilize a função charAt(), com ela é possível acessar cada caractere de sua string;
	Exemplo: 
		for ( i=0; palavra.charAt(i);i++){
			alert(palavra.charAt(i));
			/*
				este programa imprime na tela cada letra de sua string separadamente 				e para quando os caracteres acabarem;

			*/
			
		    }



	


					Exercícios de fixação

1. Implemente um programa que recebe o primeiro nome de um pessoa (com
no máximo 20 caracteres) e calcule quantos caracteres o nome dela tem.
 


2. Implemente um programa que recebe um texto de até 50 caracteres (o texto
pode conter espaços, mas deve ser digitado em uma única linha) e uma
vogal. O programa deve imprimir quantas vezes e em quais posições
aquela vogal aparece no texto.
		Dica: utilize a função charAt();

3. Implemente um programa que recebe um texto qualquer de até 1000
caracteres e imprime quantas palavras o texto possui. O seu programa
pode considerar que as palavras serão separadas por um espaço.
		Dica: utilize a função charAt();
4. Implemente um programa que recebe uma palavra e faz a cópia invertida
dela. Por exemplo: se foi digitado “exemplo”, seu programa deve criar uma
outra string que armazena “olpmexe”, e então imprimí-la.
		utilize a função charAt();
5. Implemente um programa que recebe um texto e inverte a caixa do texto
(maiúsculas são transformadas em minúsculas e vice-versa). Caracteres
não-alfabéticos não devem ser afetados.
		Dica: utilize a função charAt();


				Exercícios complementares

6. Implemente um programa que recebe duas palavras de no máximo 20
caracteres cada e determina se elas são iguais ou não.
		Dica: utilize a função charAt();

7. Implemente um programa que recebe um texto e determina a porcentagem
de ocorrencia de cada letra do alfabeto no texto. O programa não deve
distinguir minusculas e maiúsculas.
		Dica: utilize a função charAt();

8. Implemente um programa que recebe o nome completo de uma pessoa e
seu sexo (um caractere 'F' ou 'M'). O programa deve imprimir “Bom dia Sra.
<ultimo_nome>” ou “Bom dia Sr. <ultimo_nome>”, a depender do sexo.
Dica: crie um vetor auxiliar para armazenar o último nome da pessoa.
		Dica: utilize a função charAt();

9. Implemente um programa que recebe um texto e uma palavra. O programa
deve determinar se a palavra ocorre no texto ou não.

10. Implemente um programa que recebe um número inteiro positivo e em
seguida essa quantidade de palavras (com no máximo 10 caracteres cada).
O programa deve concatenar todas as palavras em uma única string.

11. Implemente um programa que verifica se um texto é um palíndromo. Uma
palavra ou frase é um palíndromo se ela é a mesma lida normal ou ao
contrário. Exemplos: “Radar”, “Reviver” e “A pateta ama ate tapa.”. O
programa deve ignorar pontuação, espaços e não deve distinguir
minúsculas e maiúsculas.

					Exercícios avançados

12. Implemente um programa que recebe duas palavras (palavra1 e palavra2) e
um texto. O programa deve substituir todas as ocorrência de palavra1 por
palavra2 no texto.


13. Implemente um programa que recebe um texto de até 1000 caracteres em
português o converte para o “miguxês”. O texto de saída deve:
• Substituir todas as ocorrências de 'a' ou 'A' por '4'.
• Substituir todas as ocorrências de 'u' ou 'U' por 'W'.
• Substituir todas as ocorrências de 's' ou 'S' por “xX”
• Substituir todas as ocorrência de 'C' por 'k'.
• Garantir que pelo menos metade (arredondado para baixo) das letras de cada palavra
é maiúscula (caracteres não-alfabéticos não contam)
• Garantir que nenhuma palavra tenha consoantes minúsculas adjacentes. Essa regra
tem prioridade sobre a anterior.


Quer adquirir mais conhecimento sobre strings ?
	Acesse: https://www.w3schools.com/jsref/jsref_obj_string.asp
