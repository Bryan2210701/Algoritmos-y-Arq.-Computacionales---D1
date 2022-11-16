#include <iostream> //Primero, se deben incluír las librerías que se utilizarán
#include <cmath>
#include <vector>
#include <stdlib.h>

using namespace std;

int main()
{
    // Declara la cantidad de números y la suma entre ellos
    int n, x;
    cout << "Ingrese la cantidad de números aleatorios (entre 0 y 10) que desee generar: ";
    cin >> n;
    float sum = 0.0;
    float vec[n];
    // Genera los números aleatorios
    for (int i=0; i<n; i++){
    x = rand() % 11;
    vec[i]=x;
    }
    // Se obtiene el promedio
    for (int i=0; i<n; i++){
        sum = sum+vec[i];
    }
    float avr = sum/n;
    cout << "La media de los datos es: " << avr << endl;
    // Computa un vector con los valores mayores al promedio
    int mayores[n];
    cout<<"Los valores mayores al promedio son: ";
    
    for (int i=0; i<n; i++){
        if (vec[i]>avr){
            mayores[i] = vec[i];
            cout<<mayores[i] << " ";
    }
    } // Finalmente, imprime los valores indicados.
}
