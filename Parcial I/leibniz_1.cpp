#include <iostream> //Se agrega la libreria estándar para c++
#include<math.h> // Se agrega esta libreria para realizar operaciones matemáticas 

using namespace std;

int main()
{
  int k, n; // Se declaran las variables k y n como enteros ya que servirán como contadores para la sumatoria.
  float sum; // Se declara la variable suma como numero real o float.
  sum=0; // Se da el valor inicial de cero a la sumatoria.
  cout << "Ingrese el número de términos ( límite superior de la sumatoria ) "; // Se pide ingresar el límite superior de la sumatoria, cuanto más grande sea el número más preciso será el valor esperado.
  cin>>n; //Guarda el valor ingresado
  for (k=0;k<=n;k++) //El índice k empieza en cero y mientras k sea menor o igual que n, k avanzará de uno en uno.
  {
    sum=sum + pow(-1,k)/((2*k)+1); // Se realiza la sumatoria
  }

  cout << " El valor de la sumatoria de Leibniz para " <<n<< " términos es " <<sum<< " Y el valor de Pi es " <<4*sum ;
  //Finalmente el programa imprime los valores de la sumatoria de Leibnitz y Pi para n términos.
}
