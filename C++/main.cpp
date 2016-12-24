#include <iostream>
#include "Calcular.h"

using namespace std;

// metodo para retornar el nombre de los signos
string mostrarSigno(Calcular *obj)
{
    // el signo sera igual al valor que retorne el metodo signoZodiacal()
    switch (obj->signoZodiacal())
    {
        case 1:
            return "Acuario";
        case 2:
            return "Piscis";
        case 3:
            return "Aries";
        case 4:
            return "Tauro";
        case 5:
            return "Geminis";
        case 6:
            return "Cancer";
        case 7:
            return "Leo";
        case 8:
            return "Virgo";
        case 9:
            return "Libra";
        case 10:
            return "Escorpio";
        case 11:
            return "Sagitario";
        default:
            return "Capricornio";
    }
}

int main(void)
{
    // se crea un objeto de la clase Calcular (Instanciaciación)
    Calcular *obj = new Calcular();
    int d,m,a;// declaramos las variables d,m,a de tipo entero
    // pedimos el dia de nacimiento y lo guardamos en "d"
    cout << "Digite dia de nacimiento" << endl;
    cout << ">> ";
    cin >> d;
    // llamamos al setDia() y encapsulamos "d"
    obj->setDia(d);
    // pedimos el mes de nacimiento y lo guardamos en "d"
    cout << "Digite mes de nacimiento" << endl;
    cout << ">> ";
    cin >> m;
    // llamamos al setMes() y encapsulamos "m"
    obj->setMes(m);
    /* notese que se convierte el "164" en un caracter (char)
     * ese 164 en la tabla ASCII significa "ñ"
     */
    cout << "Digite a" << (char) 164 << "o de nacimiento" << endl;
    cout << ">> ";
    cin >> a;
    // llamamos al setAnio() y encapsulamos "a"
    obj->setAnio(a);
    cout << "Signo: " << mostrarSigno(obj) << endl;
    cout << "Edad: " <<  obj->edadPersona() << endl;
}
