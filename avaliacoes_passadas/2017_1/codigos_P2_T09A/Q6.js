		texto = ""; 
		maisNovo = 150
		idade = []
		matricula = []
		soma = 0
		var matriculaMaisNovo   
		cont = 0

		for(i=0; i<200; i++){
			idade[i] = lerReal("entre com a idade do estudante " +i)
			matricula[i] = lerReal("entre com a matricula do aluno " +i)
			soma = soma + idade[i]
			if(maisNovo > idade[i]){
				maisNovo = idade[i]
				matriculaMaisNovo = matricula[i]
			}
			
		}

		media = soma/200

		for(i=0; i<200; i++){
			if(idade[i] > media){
				cont =cont + 1
			}
		}
		porcentagem = cont/200
		
		texto += "Media: "+media +". \n"; 
		texto += "Matricula: "+matriculaMaisNovo +". \n" ;
		texto += "Percentual: "+(porcentagem*100) +"%. \n" ;
		escreva(texto) 
