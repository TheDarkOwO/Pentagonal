#include "pentagonal.h"
void menu();
int main()
{
    float auxlado, auxaltura;
    pentagonal piramide;
    char op = '0';
    while (op != '4')
    {
        menu();
        cin >> op;
        system("clear");
        switch (op)
        {
        case '1':
            cout << "\n|| Entrar datos  ||\n";
            cout << "\nIngrese el valor del lado de la piramide: ";
            cin >> auxlado;
            piramide.setlado(auxlado);
            cout << "\nIngrese la altura de la piramide: ";
            cin >> auxaltura;
            piramide.setaltura(auxaltura);
            cout << "\nDatos entregados correctamente!\n\n\n";
            cout << "ingrese cualquier tecla para continuar\n";
            cin.ignore();
            cin.get();
            system("clear");
            break;
        case '2':
            piramide.imprimir1();
            break;
        case '3':
            piramide.imprimir2();
            break;
        case '4':
            system("clear");
            break;
        default:
            cout << "Ingrese un numero valido\n";
            cout << "ingrese cualquier tecla para continuar\n";
            op = '0';
            cin.ignore();
            cin.get();
            system("clear");

        }
    }
    return 0;
}

void menu()
{
    cout << "                 |||||Pentagonal|||||\n\n";
    cout << "Programa para calcular area y volumen de una piramide pentagonal\n\n";
    cout << "\n 1. entregar atributos a la piramide.";
    cout << "\n 2. Mostrar atributos entregados de la piramide.";
    cout << "\n 3. Imprimir datos calculados.";
    cout << "\n 4. Salir del programa";
    cout << "\n\n Escoja lo que desea hacer UwU: ";
}
