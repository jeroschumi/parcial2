#include "funciones.h"


//Calcula el promedio de la TNA para cada banco
void Funciones::CalcularTNAPromedio(double tasasHistoricas[3][3], double promediosTNA[3]) {
    for (int b=0; b<3; b++) {
        double sumaTasas = 0.0; //Acumulador de tasas (se reinicia por banco)

        //Recorre los tres años de cada banco
        for (int a=0; a<3; a++) {
            sumaTasas += tasasHistoricas[b][a]; //Suma la tasa del año actual
        }

        promediosTNA[b] = sumaTasas / 3.0; //Calcula y guarda el promedio del banco
    }
}


//Calcula el monto final con la TNA promedio (anual)
void Funciones::CalcularInversionTNAPromedio(double capital, double promediosBancos[3], double montosFinales[3]){
    for(int i = 0; i < 3; i++){
        double ganancia = capital * promediosBancos[i] / 100; //Ganancia por año
        montosFinales[i] = capital + ganancia * 3; //Monto final (caital inicial + ganancia de 1 año)
    }
}


//Calcula la inversión en plazos trimestrales acumulando y reinvirtiendo ganancias
void Funciones::CalcularInversionTrimestral(double capital, double TNA[3][3], double montosFinales[3]){
    for(int i = 0; i < 3; i++){
        double monto = capital;

        for(int j = 0; j < 3; j++){
            for(int t = 0; t < 4; t++){
                //Suma interés generado del trimestre
                monto = monto + monto * TNA[i][j] / 100 / 4;
            }
        }

        montosFinales[i] = monto; //Guarda el monto final de los 12 trimestre
    }
}


//Calcula la ganancia neta reinvirtiendo el capital período a período
double Funciones::CalcularGanancia(double capitalInicial, double tasaAnual, int periodosEnElAnio) {
    double tasaDelPeriodo = (tasaAnual / 100.0) / periodosEnElAnio; //Calcula la tasa proporcional
    double capitalAcumulado = capitalInicial; //Inicia con el capital inicial

    //Reinvierte el capital en cada período del año
    for (int periodo = 0; periodo < periodosEnElAnio; periodo++) {
        capitalAcumulado += capitalAcumulado * tasaDelPeriodo; //Suma el interés del preíodo
    }

    return capitalAcumulado - capitalInicial; //Retorna solo la ganancia neta
}
