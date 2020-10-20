#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include "Empregado.hpp"

class Engenheiro : public Empregado {
	public:
		Engenheiro(std::string _nome, double _salarioHora, double _horasTrabalhadas, int _projetos) : 
		Empregado(_nome, _salarioHora, _horasTrabalhadas), projetos(_projetos) {}

		friend std::ostream & operator << (std::ostream &out, const Engenheiro &eng);

	private:
		int projetos;
};

#endif