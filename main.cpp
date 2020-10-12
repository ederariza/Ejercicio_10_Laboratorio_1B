
/*
Problema 10. Escriba un programa que reciba un número n e imprima el enésimo número primo.
Ej: Si recibe 4 el programa debe imprimir 7.
Nota: la salida del programa debe ser: El primo numero 4 es: 7
*/

#include <iostream>
using namespace std;

bool numeroprimo(int numero);

int main(){

    int posicion_numero_primo;

    cout << "Ingrese el numero: ";
    cin >> posicion_numero_primo;

    int numero = 0;
    int contador = 0;
    while (contador != posicion_numero_primo){

        numero += 1;
        if (numeroprimo(numero) )
            contador += 1;
    }

    cout << "El numero primo en la posicion numero " << posicion_numero_primo << " es " << numero << endl;

    return 0;

}


bool numeroprimo(int numero){

    int contador = 0;
    bool primo = 0;

    for (int i=1; i<=numero; i++) {

        if ((numero % i) == 0) {
                contador += 1;

                if ((contador > 2) || (numero == 1)) {
                    primo = false;
                }

                else {

                     if ((contador == 2) && (i == numero)){
                         primo = true;
                     }
                }
        }
    }

    return primo;
}

