		vetor = [];
		for(i = 0;i < 10;i++){
			vetor[i] = lerInteiro("Entre com um valor inteiro: ");
		}
		
		for(i = 0;i< 10;i++){
			if(vetor[i] == 0 || vetor[i] < 0){
				vetor[i] = 1;
			}
		}
		escreva(vetor);	
