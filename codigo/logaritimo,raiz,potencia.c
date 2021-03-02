#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portugueses");
	
	int numero = 4, resultado;
	
	resultado = pow(numero, 3);  //potência
	printf("%d\n", resultado);  //imprime o resultado
	
	resultado = sqrt (numero);  //raiz quadrada
	printf("%d\n", resultado);  //imprime o resultado
	
	resultado = log (numero);  //logaritimo natural
	printf("%d\n", resultado);  //imprime o resultado
	
	}

