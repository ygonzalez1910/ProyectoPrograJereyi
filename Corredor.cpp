#include "Corredor.h"
#include <sstream>
using std::stringstream;
Corredor::Corredor(Deportista* deportista, char sexo, double estatura)
	: Triatlonista(deportista), sexo(sexo), estatura(estatura)
{
}

Corredor::~Corredor()
{
}

string Corredor::toString()
{
	stringstream r;
	r << "Datos Biom�tricos:" << endl;
	r << datosBiometricos->toString();
	r << "Sexo: " << sexo << endl;
	r << "Estatura: " << estatura << endl;
	return r.str();
}
