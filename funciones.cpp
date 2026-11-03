#include "funciones.h"

void Funciones::CalcularTNAPromedio(double TNA[3][3], double promediosBancos[3]){

    int banco = 0;
    double promedio = 0;

    while(banco < 3){
        for(int i = 0; i < 3; i ++){
           promedio += TNA[banco][i];
        }
        promediosBancos[banco] = promedio / 3;
        promedio = 0;
        banco++;
    }
}
