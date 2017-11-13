		X = lerInteiro("Entre com um valor inteiro: ");
		Y = lerInteiro("Entre com um valor inteiro: ");
		sum = 0;
		
		if(X > Y){
			aux = Y;
			Y = X;
			X = aux;
		}

		for(i = X; i <= Y;i++){
				if(i % 13 != 0){
					sum += i;
				}
		}
		
		escreva(sum);
