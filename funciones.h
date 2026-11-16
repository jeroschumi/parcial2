#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

void calcularTNAPromedio(double tasas[3][3], double promedios[3]) {
    for (int i = 0; i < 3; i++) {
        double suma = 0.0;
        for (int j = 0; j < 3; j++) {
            suma += tasas[i][j];
        }
        promedios[i] = suma / 3.0;
    }
}

double calcularGanancia(double capital, double tasaAnual, int periodos) {
    double tasaPeriodica = (tasaAnual / 100.0) / periodos;
    double capitalAcumulado = capital;

    for (int i = 0; i < periodos; i++) {
        capitalAcumulado += capitalAcumulado * tasaPeriodica;
    }
    return capitalAcumulado - capital;
}
    void CalcularInversionTNAPromedio(double capital, double promediosBancos[3], double montosFinales[3]);

    void CalcularInversionTrimestral(double capital, double TNA[3][3], double montosFinales[3]);

};
main

#endif // FUNCIONES_H_INCLUDED
