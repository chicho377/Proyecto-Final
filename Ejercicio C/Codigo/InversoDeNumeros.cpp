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
		
		// inicializar variables
		numeroOriginal = numero;
		inverso = 0;
		
		//calcular el inverso del numero
		while(numero > 0){
			digito = numero % 10;  // extraer el ultimo digito
			inverso = inverso * 10 + digito;  // agregar el digito al inverso
			numero /= 10;          // eliminar el ultimo digito del numero
		}
		
		// mostrar los resultados
		printf("Numero ingresado: %d\n", numeroOriginal);
		printf("Numero inverso: %d\n", inverso);
		
		//preguntar si desea continuar
		printf("Desea ingresar otro numero? (s/n): ");
		scanf(" %c", &continuar);
	}while(continuar == 's' || continuar == 'S');
	
	return 0;
}
