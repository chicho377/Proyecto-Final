#include <iostream>


int main(int argc, char** argv) {
	
	// variables
	int numero, numeroOriginal, inverso, digito;
	char continuar;
	
	do{
		printf("Ingresa un numero entero (maximo 5 digitos): ");
		scanf("%d", &numero);
		
		printf("Desea ingresar otro numero? (s/n): ");
		scanf("%c", &continuar);
	}while(continuar == 's' || continuar == 'S');
	
	return 0;
}
