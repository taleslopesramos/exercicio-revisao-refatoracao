#include "Empregado.hpp"

double Empregado::pagamentoMes() const {
    double totalHorasCalculo = horasTrabalhadas;
    
    //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
    if (horasTrabalhadas > JORNADA_PADRAO_HORAS) {
        double horasExtras = horasTrabalhadas - JORNADA_PADRAO_HORAS;
        totalHorasCalculo += horasExtras * COEFICIENTE_HORA_EXTRA;
    }

    return totalHorasCalculo * salarioHora;
}
