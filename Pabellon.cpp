
/*
 * =====================================================================================
 *
 *       Filename:  Pabellon.cpp
 *
 *    Description:  Implementaci�n de la Clase Pabellon
 *
 *        Created:  2019-09-11
 *
 *         Author:  Jos� Rafael Jim�nez
 *
 * =====================================================================================
 */


#include "Pabellon.h"

Pabellon::Pabellon() {}


void Pabellon::asignarPacientes(Paciente &paciente)
{
	pacientes.push_back(paciente);
	tamanoPacientes++;

}

std::string Pabellon::imprimirPabellonPacientes(int pos)
{
	std::string reporte = "";

	reporte = reporte + pacientes.at(pos).imprimirPaciente();

		return reporte;
}

