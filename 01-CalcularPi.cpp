#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//Defino la funcion
double Calcular_Pi () {
    double pi = 0;
    double den = 1;
    int sig = 1;


while (abs (4 * pi - 3.141592) >= 0.0000001) //Para que me devuelva los 6 decimales 
{
    pi += sig * (1/den);
    sig *= -1; //Para que vaya intercalando el signo
    den += 2; //Para que vaya sumando el 2 al denominador
}
return 4*pi;
}


int main () {
    double pi = Calcular_Pi();
    cout.precision (7);
    cout << "El valor de Pi es: " << pi << endl;
    return 0;
}
