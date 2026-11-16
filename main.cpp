#include <iostream>
#include <locale.h>
#include <iomanip>

#include "funciones.h"

using namespace std;

int main(){
    setlocale(LC_ALL, "spanish");


    // Punto 1: Ingreso de datos (capital y tasas)
    double capital;
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


    // Punto 2: Cálculo y visualización del TNA Promedio
    double promediosBancos[3];
    calcularTNAPromedio(tasas, promediosBancos);
    cout << fixed << setprecision(3);

    for(int i = 0; i < 3; i++){
        cout << "El TNA promedio del banco " << bancos[i] << " es: " << promediosBancos[i] << endl;
    }


    // Punto 3: Cálculo y visualización de Inversión con TNA Promedio (Anual)
    double montosTNAPromedio[3];
    calcularInversionTNAPromedio(capital, promediosBancos, montosTNAPromedio);

    for(int i = 0; i < 3; i++){
        cout << "Inversion con TNA promedio en " << bancos[i] << ": " << montosTNAPromedio[i] << endl;
    }


    // Punto 4: Cálculo y visualización de Inversión Trimestral
    double montosTrimestrales[3];
    calcularInversionTrimestral(capital, tasas, montosTrimestrales);

    for(int i = 0; i < 3; i++){
        cout << "Inversion trimestral en " << bancos[i] << ": " << montosTrimestrales[i] << endl;
    }


    // Punto 5: Cálculo y visualización de Inversión Mensual
    double montosMensuales[3];
    calcularInversionMensual(capital, tasas, montosMensuales);

    for(int i=0; i<3; i++){
        cout<<"Inversión mensual en "<<bancos[i]<<": "<<montosMensuales[i]<<endl;
    }

    return 0;
}
