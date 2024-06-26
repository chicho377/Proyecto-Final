#include <iostream>
#include <cstdio>
#include <cstring>

int main(int argc, char** argv) {
	
	// variables
	int numeroFactura = 0;
    int cantGaleria = 0, cantPalco = 0, cantTotal = 0;
    int cedula = 0, tipoCliente = 0, tipoTiquete = 0, cantidadTiquetes = 0;
    double montoUnitario = 0.0, montoVenta = 0.0, descuento = 0.0, subTotal = 0.0, impuesto = 0.0, totalPagar = 0.0;
    double acumGaleria = 0.0, acumPalco = 0.0, acumTotal = 0.0;
    char nombre[100];
    char continuar;
    
    do{
    	numeroFactura++;
    	// ingresar datos del cliente
        printf("Ingrese cedula: ");
        scanf("%d", &cedula);
        printf("Ingrese nombre y apellido: ");
        getchar();
        fgets(nombre, sizeof(nombre), stdin);
        // eliminar el salto de l�nea al final de la entrada
        nombre[strcspn(nombre, "\n")] = 0;

        printf("Ingrese tipo de cliente (1=Nino o adulto mayor, 2=Adulto): ");
        scanf("%d", &tipoCliente);
        
        // validar que el tipo de cliente sea correcto
        while(tipoCliente > 2 || tipoCliente < 1){
        	printf("Tipo de cliente incorrecto. Por favor ingrese 1-Nino o adulto mayor, 2-Adulto: ");
        	scanf("%d", &tipoCliente);
		}
        
        printf("Ingrese tipo de tiquete (1=Tiquete Galeria, 2=Tiquete Palco): ");
        scanf("%d", &tipoTiquete);
        
        // validar que el tipo de tiquete sea correcto
        while(tipoTiquete > 2 || tipoTiquete < 1){
        	printf("Tipo de tiquete incorrecto. Por favor ingrese 1-Galeria, 2-Palco: ");
        	scanf("%d", &tipoTiquete);
		}
        
        printf("Ingrese cantidad de tiquetes: ");
        scanf("%d", &cantidadTiquetes);
		
		// calcular monto unitario
        if (tipoTiquete == 1) {
            montoUnitario = 6000;
        } else if (tipoTiquete == 2) {
            montoUnitario = 12000;
        }
        
        // calcular monto de venta
        montoVenta = cantidadTiquetes * montoUnitario;
        
        // calcular descuento
        if (tipoCliente == 1) {
            descuento = montoVenta * 0.30;
        } else {
            descuento = 0;
        }
        
        // calcular subtotal
        subTotal = montoVenta - descuento;

        // calcular impuesto
        impuesto = subTotal * 0.13;

        // calcular total a pagar
        totalPagar = subTotal + impuesto;
        
        // imprimir factura
        printf("\n=============================\n");
        printf("         FACTURA #%d\n", numeroFactura);
        printf("=============================\n");
        printf("Cedula: %d\n", cedula);
        printf("Nombre: %s\n", nombre);
        printf("Tipo de cliente: %d\n", tipoCliente);
        printf("Tipo de tiquete: %d\n", tipoTiquete);
        printf("Cantidad de tiquetes: %d\n", cantidadTiquetes);
        printf("Monto unitario por tiquete: %.2f\n", montoUnitario);
        printf("Monto de venta: %.2f\n", montoVenta);
        printf("Descuento: %.2f\n", descuento);
        printf("Subtotal de venta: %.2f\n", subTotal);
        printf("Impuesto de venta: %.2f\n", impuesto);
        printf("Total a pagar: %.2f\n", totalPagar);
        printf("=============================\n");
        
        // actualizar estadisticas
        if (tipoTiquete == 1) {
            cantGaleria += cantidadTiquetes;
            acumGaleria += totalPagar;
        } else if (tipoTiquete == 2) {
            cantPalco += cantidadTiquetes;
            acumPalco += totalPagar;
        }
        cantTotal += cantidadTiquetes;
        acumTotal += totalPagar;
    	
    	printf("Desea registrar otra venta? (s/n): ");
    	scanf(" %c", &continuar);
	}while(continuar == 's' || continuar == 'S');
	
	// mostrar estadisticas finales
    printf("\nEstadisticas finales:\n");
    printf("=============================\n");
    printf("Cantidad de entradas Tiquetes Galeria: %d\n", cantGaleria);
    printf("Acumulado Dinero por Tiquetes Galeria: %.2f\n", acumGaleria);
    printf("Cantidad de entradas Tiquetes Palco: %d\n", cantPalco);
    printf("Acumulado Dinero por Tiquetes Palco: %.2f\n", acumPalco);
    printf("Cantidad General de Entradas: %d\n", cantTotal);
    printf("Acumulado General Dinero por Entradas: %.2f\n", acumTotal);
    if (numeroFactura > 0) {
        printf("Promedio General por Ventas: %.2f\n", acumTotal / numeroFactura);
    }
    printf("=============================\n");
	
	return 0;
}
