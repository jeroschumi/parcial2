#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

void calcularTNAPromedio(double tasas[3][3], double promedios[3]);

void calcularInversionTNAPromedio(double capital, double promediosBancos[3], double montosFinales[3]);

void calcularInversionTrimestral(double capital, double TNA[3][3], double montosFinales[3]);

double calcularGanancia(double capital, double tasaAnual, int periodos);

void calcularInversionMensual(double capital, double TNA[5], double montosFinales[5]);

#endif // FUNCIONES_H_INCLUDED
