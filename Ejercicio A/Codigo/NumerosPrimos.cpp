#include <iostream>
#include <vector>
#include <cmath>
#include <cstdio>

using namespace std;

bool esPrimo(int numero) {
    if (numero <= 1) return false;
    for (int i = 2; i <= sqrt(numero); ++i) {
        if (numero % i == 0) return false;
    }
    return true;
}

void mostrarEstadisticas(const vector<int>& numeros, const vector<int>& primos, const vector<int>& noPrimos) {
    if (!numeros.empty()) {
        
        int mayor = numeros[0];
        int posicionMayor = 1;
        for (size_t i = 1; i < numeros.size(); ++i) {
            if (numeros[i] > mayor) {
                mayor = numeros[i];
                posicionMayor = i + 1;
            }
        }

        
        int sumPrimos = 0;
        for (size_t i = 0; i < primos.size(); ++i) {
            sumPrimos += primos[i];
        }
        int cantPrimos = primos.size();
        double promedioPrimos = cantPrimos > 0 ? static_cast<double>(sumPrimos) / cantPrimos : 0;

        int sumNoPrimos = 0;
        for (size_t i = 0; i < noPrimos.size(); ++i) {
            sumNoPrimos += noPrimos[i];
        }
        int cantNoPrimos = noPrimos.size();
        double promedioNoPrimos = cantNoPrimos > 0 ? static_cast<double>(sumNoPrimos) / cantNoPrimos : 0;

        printf("Numero Mayor Ingresado: %d en la posicion %d\n", mayor, posicionMayor);
        printf("Cantidad Números Primos: %d\n", cantPrimos);
        printf("Sumatoria de los Numeros Primos: %d\n", sumPrimos);
        printf("Promedio de los Numeros Primos: %.2f\n", promedioPrimos);
        printf("Cantidad Numeros No Primos: %d\n", cantNoPrimos);
        printf("Sumatoria Numeros No Primos: %d\n", sumNoPrimos);
        printf("Promedio de los Numeros No Primos: %.2f\n", promedioNoPrimos);
    } else {
        printf("No se ingresaron numeros.\n");
    }
}

int main() {
    vector<int> numeros;
    vector<int> primos;
    vector<int> noPrimos;

    char continuar = 'S';
    while (continuar == 'S' || continuar == 's') {
        int numero;
        printf("Ingrese un numero entero: ");
        scanf("%d", &numero);

        numeros.push_back(numero);

       
        if (esPrimo(numero)) {
            primos.push_back(numero);
            printf("El numero %d es un Numero Primo\n", numero);
        } else {
            noPrimos.push_back(numero);
            printf("El numero %d No es un Numero Primo\n", numero);
        }

        printf("¿Desea ingresar otro numero? (S/N): ");
        scanf(" %c", &continuar);
    }
   
    mostrarEstadisticas(numeros, primos, noPrimos);

    return 0;
}
