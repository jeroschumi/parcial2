#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

class Funciones{

public:

    void CalcularTNAPromedio(double TNA[3][3], double promediosBancos[3]);

    void CalcularInversionTNAPromedio(double capital, double promediosBancos[3], double montosFinales[3]);

    void CalcularInversionTrimestral(double capital, double TNA[3][3], double montosFinales[3]);

};

#endif // FUNCIONES_H_INCLUDED
