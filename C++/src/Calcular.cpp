#include "Calcular.h"

Calcular::Calcular()
{
    dia = 0;
    mes = 0;
    anio = 0;
}

Calcular::~Calcular()
{
    //dtor
}

// implementacion del metodo para calcular la edad
int Calcular::edadPersona()
{
    return 2016 - anio;
}

// implementacion del metodo para calcular el signo zodiacal
int Calcular::signoZodiacal()
{
    /* si la persona cumple entre el 21 y el 31 de enero
     * o entre el 1 hasta el 18 de febrero, entonces retornara 1
     * el cual sera el valor de "Acuario", asi sera con las demas condiciones..
     */
    if ((mes == 1 && dia >= 21 && dia <= 31) || (mes == 2 && dia >= 1 && dia <= 18))
    {
        return 1;
    }
    else if ((mes == 2 && dia >= 19  && dia <= 30) || (mes == 3 && dia >= 1 && dia <= 20))
    {
        return 2;
    }
    else if ((mes == 2 && dia >= 21  && dia <= 31) || (mes == 4 && dia >= 1 && dia <= 20))
    {
        return 3;
    }
    else if ((mes == 4 && dia >= 21  && dia <= 31) || (mes == 4 && dia >= 1 && dia <= 21))
    {
        return 4;
    }
    else if ((mes == 5 && dia >= 22  && dia <= 31) || (mes == 6 && dia >= 1 && dia <= 20))
    {
        return 5;
    }
    else if ((mes == 6 && dia >= 22  && dia <= 31) || (mes == 7 && dia >= 1 && dia <= 22))
    {
        return 6;
    }
    else if ((mes == 7 && dia >= 23  && dia <= 31) || (mes == 8 && dia >= 1 && dia <= 22))
    {
        return 7;
    }
    else if ((mes == 8 && dia >= 23  && dia <= 31) || (mes == 9 && dia >= 1 && dia <= 22))
    {
        return 8;
    }
    else if ((mes == 9 && dia >= 23  && dia <= 31) || (mes == 10 && dia >= 1 && dia <= 22))
    {
        return 9;
    }
    else if ((mes == 10 && dia >= 23  && dia <= 31) || (mes == 11 && dia >= 1 && dia <= 22))
    {
        return 10;
    }
    else if ((mes == 11 && dia >= 22  && dia <= 31) || (mes == 12 && dia >= 1 && dia <= 21))
    {
        return 11;
    }
    else
    {
        return 12;
    }
}

// implementacion de los metodos Setters y Getters de los atributos de la clase
void Calcular::setDia(int n)
{
    dia = n;
}

int Calcular::getDia()
{
    return dia;
}

void Calcular::setMes(int n)
{
    mes = n;
}

int Calcular::getMes()
{
    return mes;
}

void Calcular::setAnio(int n)
{
    anio = n;
}

int Calcular::getAnio()
{
    return anio;
}
