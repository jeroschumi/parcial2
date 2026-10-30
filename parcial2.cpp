#include <iostream>
#include <locale.h>
using namespace std;

int main(){
    setlocale(LC_ALL, "spanish");

    double capital;

    cout<<"Ingrese el monto del capital a invertir: ";
    cin>>capital;

    string bancos[3] = {"Banco Provincia", "Banco Nacion", "Banco Hipotecario"};
    double tasas[3][3];

    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cout<<"Ingrese la tasa anual de "<<bancos[i]<<" para el año "<<j+1<<": ";
            cin>>tasas[i][j];
        }
    }

	return 0;
}
