		numeros = [];
		maiorValor = -1000;
		posMaior = -1;
		
		for(i = 0;i < 100;i++){
			num = lerInteiro("Entre com um valor");
			numeros[i] = num;
			
			if(num > maiorValor){
				maiorValor = num;
				posMaior = i;
			}	
		}
		escreva("O maior valor eh: "+maiorValor+" e a posicao eh "+posMaior);
