#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

float n1, n2, n3, n4, resultado;
int opcao, expoente, ciclo;

main(void){
	
	setlocale(LC_ALL, "");
	
	printf("Calculadora em C# \n");		
	printf("Qual opera��o voc� deseja realizar? \n");
	printf("\n");
	
	printf("Digite 1 para Adi��o \n");
	printf("Digite 2 para Subtra��o \n");
	printf("Digite 3 para Multiplica��o \n");
	printf("Digite 4 para Divis�o \n");
	printf("Digite 5 para Pot�ncia��o \n");
	printf("Digite 6 para Radicia��o \n");
	printf("Digite 7 para M�dia \n");
	printf("\n");
	
	printf("Digite o n�mero correspondente a opera��o: ");
	scanf("%d", &opcao);
	
	switch(opcao){		
		case 1: /* adicao */
			printf("\n");
			printf("Digite o primeiro n�mero: ");
			scanf("%f", &n1);
	
			printf("Digite o segundo n�mero: ");
			scanf("%f", &n2);
	
			resultado = n1+n2;
			printf("\n");
			printf("O resultado da adi��o �: %0.2f.", resultado);
			break;
		
		case 2: /* subtracao */
			printf("\n");
			printf("Digite o primeiro n�mero: ");
			scanf("%f", &n1);
	
			printf("Digite o segundo n�mero: ");
			scanf("%f", &n2);
			
			resultado = n1-n2;
			printf("\n");
			printf("O resultado da subtra��o �: %0.2f.", resultado);
			break;
		
		case 3: /* multiplicacao */
			printf("\n");
			printf("Digite o primeiro n�mero: ");
			scanf("%f", &n1);
	
			printf("Digite o segundo n�mero: ");
			scanf("%f", &n2);
			
			resultado = n1*n2;
			printf("\n");
			printf("O resultado da multiplica��o �: %0.2f.", resultado);
			break;
		
		case 4: /* divisao */
			printf("\n");	
			printf("Digite o primeiro n�mero: ");
			scanf("%f", &n1);
	
			printf("Digite o segundo n�mero: ");
			scanf("%f", &n2);
			
			resultado = n1/n2;
			printf("\n");
			printf("O resultado da divis�o �: %0.2f.", resultado);
			break;
		
		case 5: /* potencia */
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
			break;
		
		case 6: /* raiz */
			printf("\n");
			printf("Digite o n�mero que deseja descobrir a raiz: ");
			scanf("%f", &n1);
			resultado = sqrt(n1);
			printf("A raiz quadrada de %0.0f � de: %0.2f.", n1, resultado);
			break;
			
		case 7: /* m�dia */
			printf("\n");
			printf("Deseja realizar m�dia com 3 ou 4 algarismos? \n");
			printf("Digite 3 para 3 algarismos, e 4 para 4 algarismos: ");
			scanf("%d", &opcao);
			switch(opcao){
				case 3:
					printf("\nDigite o primeiro n�mero: ");
					scanf("%f", &n1);
	
					printf("Digite o segundo n�mero: ");
					scanf("%f", &n2);
					
					printf("Digite o terceiro n�mero: ");
					scanf("%f", &n3);
					
					resultado=(n1+n2+n3)/3;
					printf("\nO resultado da m�dia �: %0.2f.", resultado);
					break;
		
				case 4:
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
			}
			break;
	}
}






