#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

float n1, n2, n3, n4, resultado;
int opcao, expoente, ciclo;
char nome[25];

main(void){
	
	setlocale(LC_ALL, "");
	
	printf("Calculadora em C# \n");		
	printf("Qual opera��o voc� deseja realizar? \n \n");
	
	printf("Digite 1 para Adi��o \n");
	printf("Digite 2 para Subtra��o \n");
	printf("Digite 3 para Multiplica��o \n");
	printf("Digite 4 para Divis�o \n");
	printf("Digite 5 para Pot�ncia \n");
	printf("--------------x-------------- \n");
	printf("Digite 6 para M�dia com 3 algarismos \n");
	printf("Digite 7 para M�dia com 4 algarismos \n");
	printf("Digite 8 para M�dia Escolar \n \n");
	
	printf("Digite o n�mero correspondente a opera��o: ");
	scanf("%d", &opcao);
	
	switch(opcao){
		
		case 1:
			printf("\nDigite o primeiro n�mero: ");
			scanf("%f", &n1);
	
			printf("Digite o segundo n�mero: ");
			scanf("%f", &n2);
	
			resultado = n1+n2;
			printf("\n");
			printf("O resultado da adi��o �: %0.2f.", resultado);
			break;
		
		case 2:
			printf("\nDigite o primeiro n�mero: ");
			scanf("%f", &n1);
	
			printf("Digite o segundo n�mero: ");
			scanf("%f", &n2);
			
			resultado = n1-n2;
			printf("\n");
			printf("O resultado da subtra��o �: %0.2f.", resultado);
			break;
		
		case 3:
			printf("\nDigite o primeiro n�mero: ");
			scanf("%f", &n1);
	
			printf("Digite o segundo n�mero: ");
			scanf("%f", &n2);
			
			resultado = n1*n2;
			printf("\n");
			printf("O resultado da multiplica��o �: %0.2f.", resultado);
			break;
		
		case 4:
			printf("\nDigite o primeiro n�mero: ");
			scanf("%f", &n1);
	
			printf("Digite o segundo n�mero: ");
			scanf("%f", &n2);
			
			resultado = n1/n2;
			printf("\n");
			printf("O resultado da divis�o �: %0.2f.", resultado);
			break;
		
		case 5:
			printf("\n");
			printf("Digite a base: ");
			scanf("%f", &n1);
			
			printf("Digite o expoente (max. 10): ");
			scanf("%d", &expoente);
			
			switch(expoente){
				case 0:
					printf("\n");
					printf("O resultado da pot�ncia �: 1.");
					break;
					
				case 1:
					printf("\n");
					printf("O resultado da pot�ncia �: %0.0f.", n1);
					break;
				
				case 2:
					resultado=n1*n1;
					printf("\n");
					printf("O resultado da pot�ncia �: %0.0f.", resultado);
					break;
				
				case 3:
					resultado=n1*n1*n1;
					printf("\n");
					printf("O resultado da pot�ncia �: %0.0f.", resultado);
					break;	
				
				case 4:
					resultado=n1*n1*n1*n1;
					printf("\n");
					printf("O resultado da pot�ncia �: %0.0f.", resultado);
					break;
				
				case 5:
					resultado=n1*n1*n1*n1*n1;
					printf("\n");
					printf("O resultado da pot�ncia �: %0.0f.", resultado);
					break;	
				
				case 6:
					resultado=n1*n1*n1*n1*n1*n1;
					printf("\n");
					printf("O resultado da pot�ncia �: %0.0f.", resultado);
					break;
				
				case 7:
					resultado=n1*n1*n1*n1*n1*n1*n1;
					printf("\n");
					printf("O resultado da pot�ncia �: %0.0f.", resultado);
					break;	
				
				case 8:
					resultado=n1*n1*n1*n1*n1*n1*n1*n1;
					printf("\n");
					printf("O resultado da pot�ncia �: %0.0f.", resultado);
					break;
				
				case 9:
					resultado=n1*n1*n1*n1*n1*n1*n1*n1*n1;
					printf("\n");
					printf("O resultado da pot�ncia �: %0.0f.", resultado);
					break;	
				
				case 10:
					resultado=n1*n1*n1*n1*n1*n1*n1*n1*n1*n1;
					printf("\n");
					printf("O resultado da pot�ncia �: %0.0f.", resultado);
					break;							
			}
		
		case 6:
			printf("\nDigite o primeiro n�mero: ");
			scanf("%f", &n1);
	
			printf("Digite o segundo n�mero: ");
			scanf("%f", &n2);
					
			printf("Digite o terceiro n�mero: ");
			scanf("%f", &n3);
					
			resultado=(n1+n2+n3)/3;
			printf("\nO resultado da m�dia �: %0.2f.", resultado);
			break;
		
		case 7:
			printf("\nDigite o primeiro n�mero: ");
			scanf("%f", &n1);
	
			printf("Digite o segundo n�mero: ");
			scanf("%f", &n2);
					
			printf("Digite o terceiro n�mero: ");
			scanf("%f", &n3);
					
			printf("Digite o quarto n�mero: ");
			scanf("%f", &n4);
					
			resultado=(n1+n2+n3+n4)/4;
			printf("\nO resultado da m�dia �: %0.2f.", resultado);
			break;
			
		case 8:
			printf("\n");
			printf("Digite o nome do aluno: ");
			scanf("%s", &nome);
			
			printf("Digite a quantidade de ciclos (min.: 3, max.:4): ");
			scanf("%d", &ciclo);
			
			switch(ciclo){
				case 3:
					printf("\nDigite a nota do primeiro ciclo: ");
					scanf("%f", &n1);
	
					printf("Digite a nota do segundo ciclo: ");
					scanf("%f", &n2);
					
					printf("Digite a nota do terceiro ciclo: ");
					scanf("%f", &n3);
					
					resultado=(n1+n2+n3)/3;
					printf("\nA m�dia final de %s foi de: %0.1f pontos.", nome, resultado);
					break;
				
				case 4:
					printf("\nDigite a nota do primeiro ciclo: ");
					scanf("%f", &n1);
	
					printf("Digite a nota do segundo ciclo: ");
					scanf("%f", &n2);
					
					printf("Digite a nota do terceiro ciclo: ");
					scanf("%f", &n3);
					
					printf("Digite a nota do quarto ciclo: ");
					scanf("%f", &n4);
					
					resultado=(n1+n2+n3+n4)/4;
					printf("\nA m�dia final de %s foi de: %0.1f pontos.", nome, resultado);
					break;
			}
	}
}






