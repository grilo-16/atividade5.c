#include<stdio.h>
#include<math.h>

main(){
	int numero, resultado;
	
	printf("Digite um número:");
	scanf("%d", &numero);
	
	resultado = (numero % 2);
	
	if(resultado == 0){
		printf("é par mano");
	}else{
		printf("é impar mano");
	}
}

// ATIVIDADE 07 //
#include<stdio.h>
#include<math.h>

main(){
	float prova1, prova2, prova3, media;
	
	printf("digite as notas das tres provas:");
	scanf("\n%f", &prova1);
	scanf("\n%f", &prova2);
	scanf("\n%f", &prova3);
	
	media = (prova1+prova2+(prova3*2))/4;
	
	if(media >= 7){
		printf("aprovado, q genio");
	}else{
		printf("reprovado, q burro");
	}
}

// ATIVIDADE 08 //
#include<stdio.h>
#include<math.h>

main(){
	int idade, tempoTrab;
	
	printf("Qual a tua idade?:\n");
	scanf("%d", &idade);
	
	printf("A quanto tempo voce trabalha?:\n");
	scanf("%d", &tempoTrab);

	if((idade >= 65) || (tempoTrab >= 30)){
		printf("pode aposentar velho");
	}
	else if((idade >= 60) && (tempoTrab >= 25)){
		printf("pode aposentar velho");
	}
	else{
		printf("falta pouco pra jogar no INSS");
	}
}
