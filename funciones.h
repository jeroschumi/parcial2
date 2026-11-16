#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

void calcularTNAPromedio(double tasas[3][3], double promedios[3]);

void CalcularInversionTNAPromedio(double capital, double promediosBancos[3], double montosFinales[3]);

void CalcularInversionTrimestral(double capital, double TNA[3][3], double montosFinales[3]);

void CalcularGanancia(double capital, double tasaAnual, int periodos);

#endif // FUNCIONES_H_INCLUDED
