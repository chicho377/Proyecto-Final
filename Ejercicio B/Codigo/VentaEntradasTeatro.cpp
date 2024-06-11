#include <iostream>
#include <cstdio>
#include <cstring>

int main(int argc, char** argv) {
	
	// variables
	int numeroFactura = 0;
    int cantGaleria = 0, cantPalco = 0, cantTotal = 0;
    int cedula, tipoCliente, tipoTiquete, cantidadTiquetes;
    double montoUnitario, montoVenta, descuento, subtotal, impuesto, totalPagar;
    double acumGaleria = 0.0, acumPalco = 0.0, acumTotal = 0.0;
    char nombre[100];
    char continuar;
    
    do{
    	// ingresar datos del cliente
        printf("Ingrese cedula: ");
        scanf("%d", &cedula);
        printf("Ingrese nombre y apellido: ");
        getchar();  // para consumir el salto de línea pendiente
        fgets(nombre, sizeof(nombre), stdin);
        // Eliminar el salto de línea al final de la entrada
        nombre[strcspn(nombre, "\n")] = 0;

        printf("Ingrese tipo de cliente (1=Nino o adulto mayor, 2=Adulto): ");
        scanf("%d", &tipoCliente);
        printf("Ingrese tipo de tiquete (1=Tiquete Galeria, 2=Tiquete Palco): ");
        scanf("%d", &tipoTiquete);
        printf("Ingrese cantidad de tiquetes: ");
        scanf("%d", &cantidadTiquetes);
    	
    	printf("Desea registrar otra venta? (s/n): ");
    	scanf(" %c", &continuar);
	}while(continuar == 's' || continuar == 'S');
	
	return 0;
}
