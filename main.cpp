#include <iostream>
#include <locale.h>
#include <iomanip>
#include "funciones.h"
using namespace std;

int main(){
    setlocale(LC_ALL, "spanish");
    Funciones func;
    double capital;
    double promediosBancos[3];

    cout<<"Ingrese el monto del capital a invertir: ";
    cin>>capital;

    string bancos[3] = {"Banco Provincia", "Banco Nacion", "Banco Hipotecario"};
    double tasas[3][3];

    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cout<<"Ingrese la tasa anual de "<<bancos[i]<<" para el anio "<<j+1<<": ";
            cin>>tasas[i][j];
        }
    }

    func.CalcularTNAPromedio(tasas, promediosBancos);

    cout << fixed << setprecision(3);


    for(int i = 0; i < 3; i++){
        cout << "El TNA promedio del banco " << bancos[i] << "es: " << promediosBancos[i] << endl;
    }

	return 0;
}
