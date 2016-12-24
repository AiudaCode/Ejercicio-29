
import javax.swing.JOptionPane;

public class Main
{
    // metodo para retornar el nombre de los signos
    public static String mostrarSigno(Calcular obj)
    {
        // el signo sera igual al valor que retorne el metodo signoZodiacal()
        switch (obj.signoZodiacal())
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
    
    public static void main(String[] args)
    {
        Calcular obj = new Calcular();
        int d,m,a;// declaramos las variables d,m,a de tipo entero
        
        // pedimos el dia de nacimiento y lo guardamos en "d"
        d = Integer.parseInt(JOptionPane.showInputDialog(null, "Digite dia de nacimiento"));
        // llamamos al setDia() y encapsulamos "d"
        obj.setDia(d);
        // pedimos el mes de nacimiento y lo guardamos en "d"
        m = Integer.parseInt(JOptionPane.showInputDialog(null, "Digite mes de nacimiento"));
        // llamamos al setMes() y encapsulamos "m"
        obj.setMes(m);
        // pedimos el año de nacimiento y lo guardamos en "a"
        a = Integer.parseInt(JOptionPane.showInputDialog(null, "Digite año de nacimiento"));
        // llamamos al setAnio() y encapsulamos "a"
        obj.setAnio(a);
        // mostramos el Signo y la Edad
        JOptionPane.showMessageDialog(null, "Signo: " + mostrarSigno(obj));
        JOptionPane.showMessageDialog(null, "Edad: " + obj.edadPersona());
    }
}