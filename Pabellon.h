
/*
 * =====================================================================================
 *
 *       Filename:  Pabellon.h
 *
 *    Description:  Definicion de la Clase Pabellon
 *
 *        Created:  2019-09-11
 *
 *         Author:  Jos� Rafael Jim�nez
 *
 * =====================================================================================
 */

#ifndef HOSPITAL_PABELLON_H
#define HOSPITAL_PABELLON_H

#include "Paciente.h"
#include <ostream>
#include <vector>

class Pabellon {


	std::vector <Paciente> pacientes;
	int tamanoPacientes = 0;

public:
	Pabellon();

	void asignarPacientes(Paciente &);

	

};


#endif //EJERCICIOSPUNTEROSVECTORES_PABELLON_H
