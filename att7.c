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
