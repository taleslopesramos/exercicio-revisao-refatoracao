#include "Vendedor.hpp"

double Vendedor::quotaTotalAnual() const{
	return quotaMensalVendas * 12;
}

std::ostream & operator << (std::ostream &out, const Vendedor &vend){
	out << "Nome: " << vend.nome << std::endl;
	out << "Salario Mes: " << vend.pagamentoMes() << std::endl;  
	out << "Quota vendas: " << vend.quotaTotalAnual() << std::endl; 
	out << std::endl;

	return out;
}