#include "pentagonal.h"

pentagonal::pentagonal(float l, float a)
{
	setlado(l);
	setaltura(a);
}

pentagonal::pentagonal(pentagonal& copia) //Constructor basado
{
	lado = copia.lado;
	altura = copia.altura;
}

pentagonal::~pentagonal()
{
	//V O I D
}

//Implemento de metodos

void pentagonal::setlado(float l)
{
	lado = (l < 0 ? 0.0 : l);
}

void pentagonal::setaltura(float a)
{
	altura = (a < 0 ? 0.0 : a);
}

float pentagonal::getlado() const
{
	return lado;
}

float pentagonal::getaltura() const
{
	return altura;
}

float pentagonal::apotema() const
{
	return lado / (2 * 0.726542); // 0.726542 es la aproximacion de tangente de 36 grados
}

float pentagonal::arealateral() const
{
	return (5 * lado * altura) / 2;
}

float pentagonal::areabase() const
{
	return (5 * lado * apotema()) / 2;
}

float pentagonal::areatotal() const
{
	return areabase() + arealateral();
}

float pentagonal::volumen() const
{
	return (5 * lado * apotema() * altura) / 6;
}

void pentagonal::imprimir1() const
{
	cout << "||||Datos entregados||||\n\n";
	cout << "Valor de cada lado la piramide: " << getlado() << "\n";
	cout << "Altura de la piramide: " << getaltura() << "\n\n\n";
	cout << "ingrese cualquier tecla para continuar\n";
	cin.ignore();
	cin.get();
	system("clr");
}

void pentagonal::imprimir2() const
{
	cout << "||||Datos de la piramide||||\n\n";
	cout << "Valor de cada lado la piramide: " << getlado() << "\n";
	cout << "Altura de la piramide: " << getaltura() << "\n";
	cout << "Area lateral piramide: " << arealateral() << "\n";
	cout << "Area de la base la piramide: " << areabase() << "\n";
	cout << "Area total la piramide: " << areatotal() << "\n";
	cout << "Volumen de la piramide: " << volumen() << "\n\n\n";
	cout << "ingrese cualquier tecla para continuar\n";
	cin.ignore();
	cin.get();
	system("clr");
}
