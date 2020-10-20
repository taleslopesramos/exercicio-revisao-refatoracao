#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

const int JORNADA_PADRAO_HORAS = 8;
const int COEFICIENTE_HORA_EXTRA = 0.5;

class Empregado {
    public:
        Empregado(std::string _nome, double _salarioHora, double _horasTrabalhadas) : 
        nome(_nome), salarioHora(_salarioHora), horasTrabalhadas(_horasTrabalhadas) {}
        
        double pagamentoMes() const;

    protected:
        std::string nome;
        double salarioHora;
        double horasTrabalhadas;
};

#endif