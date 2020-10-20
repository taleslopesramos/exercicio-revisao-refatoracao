#include "Engenheiro.hpp"

std::ostream & operator << (std::ostream &out, const Engenheiro &eng){
    out << "Nome: " << eng.nome << std::endl;
    out << "Salario Mes: " << eng.pagamentoMes() << std::endl;
    out << "Projetos: " << eng.projetos << std::endl;
    out << std::endl;
    
    return out;
}