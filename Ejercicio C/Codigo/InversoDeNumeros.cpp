#include <iostream>


int main(int argc, char** argv) {
	
	// variables
	int numero, numeroOriginal, inverso, digito;
	char continuar;
	
	do{
		// solicitar el numero al usuario
		printf("Ingresa un numero entero (maximo 5 digitos): ");
		scanf("%d", &numero);
		
		//validar que el numero tenga maximo 5 digitos
		while(numero > 99999 || numero < 0){
			printf("Numero invalido. Por favor ingrese un numero entre 0 y 99999: ");
			scanf("%d", &numero);
		}
		
		//preguntar si desea continuar
		printf("Desea ingresar otro numero? (s/n): ");
		scanf("%c", &continuar);
	}while(continuar == 's' || continuar == 'S');
	
	return 0;
}
