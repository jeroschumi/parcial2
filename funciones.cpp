#include "funciones.h"

// Calcula el promedio de las 3 tasas anuales de cada banco
// TNA[i][j] = tasa del banco i en el año j
// El resultado se guarda en promediosBancos (una posición por banco)
void Funciones::CalcularTNAPromedio(double TNA[3][3], double promediosBancos[3]){

    // Recorremos los 3 bancos
    for(int i = 0; i < 3; i++){
        double suma = 0; // empieza en 0 para cada banco

        // Sumamos las tasas de los 3 años de ese banco
        for(int j = 0; j < 3; j++){
            suma = suma + TNA[i][j];
        }

        // El promedio es la suma dividida la cantidad de años
        promediosBancos[i] = suma / 3;
    }
}

// Calcula cuánta plata se tiene después de invertir el capital 3 años
// usando la tasa promedio de cada banco.
// Lo ganado NO se reinvierte: se gana lo mismo todos los años.
void Funciones::CalcularInversionTNAPromedio(double capital, double promediosBancos[3], double montosFinales[3]){

    // Recorremos los 3 bancos
    for(int i = 0; i < 3; i++){
        // Lo que se gana en 1 año (la tasa está en %, por eso se divide por 100)
        double ganancia = capital * promediosBancos[i] / 100;

        // Monto final = capital inicial + lo ganado en los 3 años
        montosFinales[i] = capital + ganancia * 3;
    }
}

// Calcula cuánta plata se tiene después de invertir el capital 3 años
// en plazos trimestrales (4 por año), reinvirtiendo lo ganado.
// Cada trimestre se usa la tasa del año dividida 4.
void Funciones::CalcularInversionTrimestral(double capital, double TNA[3][3], double montosFinales[3]){

    // Recorremos los 3 bancos
    for(int i = 0; i < 3; i++){
        double monto = capital; // cada banco arranca con el capital inicial

        // Recorremos los 3 años
        for(int j = 0; j < 3; j++){
            // Recorremos los 4 trimestres del año
            for(int t = 0; t < 4; t++){
                // Se suma lo ganado en el trimestre al monto,
                // así el trimestre siguiente se invierte todo junto
                monto = monto + monto * TNA[i][j] / 100 / 4;
            }
        }

        // Después de los 12 trimestres, guardamos el monto final del banco
        montosFinales[i] = monto;
    }
}
