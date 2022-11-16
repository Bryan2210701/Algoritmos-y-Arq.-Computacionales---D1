#include <math.h>
#include <iostream>

using namespace std;

int main()
{
    cout << "La presente aplicación permite realizar una transformación sobre un cuadrilátero definido por 4 coordenadas (x,y)" << endl;
    
    // Definimos las variables
    double coordinates[4][2], t_coordinates[4][2], x;

    // Se le pide al usuario introducir los vertices del cuadrilátero
    cout << "Primero, ingrese las coordenadas." << endl;
    for (int i=0; i<4; i++)
    {
        cout << "Vertice " << i + 1 << ": " << endl;
        for (int j=0; j<2; j++)
        {
            cout << "Coordenada " << j+1 << ": ";
            cin >> coordinates[i][j];
        }
    }

    // Se define el ángulo de rotación de la matriz de transformación
    cout << "Introduzca el valor del ángulo de rotación: ";
    cin >> x;

    // Definimos la matriz de transformación
    double A[2][2] = { {cos(x), -sin(x)}, {sin(x), cos(x)} };

    // Calculamos la transformación del Cuadrilátero con la matriz A
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<2; j++)
        {
            t_coordinates[i][j] = 0;
            for (int k=0; k<2; k++)
            {
                t_coordinates[i][j] += A[j][k] * coordinates[i][k];
            }
        }
    }
    
    // Conocido el cuadrilátero transformado, se mostrarán los resultados 
    cout << "Las coordenadas de los vértices en el nuevo cuadrilátero son: " << endl;
    for (int i=0; i<4; i++)
    {
        cout << "Vértice " << i + 1 << ": ";
        for (int j=0; j<2; j++)
        {
            cout << "[ " << t_coordinates[i][j] << " ]";
        }
        cout << endl;
    }

}