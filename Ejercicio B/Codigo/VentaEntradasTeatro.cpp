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
    	
    	
    	printf("Desea registrar otra venta? (s/n): ");
    	scanf(" %c", &continuar);
	}while(continuar == 's' || continuar == 'S');
	
	return 0;
}
