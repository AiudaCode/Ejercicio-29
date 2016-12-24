#ifndef CALCULAR_H
#define CALCULAR_H


class Calcular
{
    public:
        Calcular();
        virtual ~Calcular();
        // se declaran los metodos publicos para calcular la edad y el signo
        int edadPersona();
        int signoZodiacal();
        // se declaran los metodos Setters y Getters de la clase
        void setDia(int n);
        int getDia();
        void setMes(int n);
        int getMes();
        void setAnio(int n);
        int getAnio();
    protected:

    private:
        // se declaran los atributos privados de la clase
        int dia;
        int mes;
        int anio;
};

#endif // CALCULAR_H
