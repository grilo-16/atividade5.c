#include<stdio.h>
#include<math.h>

main(){
	float salarioAtual, reajuste, salarioFinal;
	int tempServ, bonus;
	
	printf("Qual o seu salário atual?\n");
	scanf("%f", &salarioAtual);
	
	printf("Quanto tempo voce trabalha?(em anos)\n");
	scanf("%d", &tempServ);

	if((salarioAtual <= 500)){
		reajuste = (salarioAtual*25)/100;
	}else if((salarioAtual > 500) && (salarioAtual <= 1000)){
		reajuste = (salarioAtual*20)/100;
	}else if((salarioAtual > 1000) && (salarioAtual <= 1500)){
		reajuste = (salarioAtual*15)/100;
	}else if((salarioAtual > 1500) && (salarioAtual <= 2000)){
		reajuste = (salarioAtual*10)/100;
	}else if(salarioAtual > 2000){
		reajuste = (salarioAtual*0)/100;
	}
	if(tempServ < 1){
		bonus = 0;
	}
	else if((tempServ > 1) && (tempServ <= 3)){
		bonus = 100;
	}else if((tempServ > 3) && (tempServ <= 6)){
		bonus = 200;
	}else if((tempServ > 6) && (tempServ <= 10)){
		bonus = 300;
	}else if(tempServ > 10){
		bonus = 500;
	}
	salarioFinal = salarioAtual + reajuste + bonus;
	
	printf("O seu salario será de %.2f", salarioFinal);
}
