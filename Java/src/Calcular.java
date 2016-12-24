public class Calcular
{
    // declaramos los atributos de tipo entero
    private int dia;
    private int mes;
    private int anio;
    
    public Calcular()
    {
        dia = 0;
        mes = 0;
        anio = 0;
    }

    // metodo para calcular la edad de la persona
    int edadPersona()
    {
        return 2016 - anio;
    }
    
    // metodo para calcular el signo zodiacal
    public int signoZodiacal()
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
    public void setDia(int n)
    {
        dia = n;
    }

    public int getDia()
    {
        return dia;
    }

    public void setMes(int n)
    {
        mes = n;
    }

    public int getMes()
    {
        return mes;
    }

    public void setAnio(int n)
    {
        anio = n;
    }

    public int getAnio()
    {
        return anio;
    }
}