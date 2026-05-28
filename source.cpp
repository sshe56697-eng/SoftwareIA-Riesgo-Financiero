#include <iostream>

int evaluarProduccion(int produccion) {

    if (produccion <= -30) {
        return 40;
    }

    if (produccion <= -20) {
        return 30;
    }

    if (produccion <= -10) {
        return 20;
    }

    if (produccion <= -5) {
        return 10;
    }

    return 0;
}

int evaluarEndeudamiento(int deuda) {

    if (deuda >= 85) {
        return 40;
    }

    if (deuda >= 70) {
        return 30;
    }

    if (deuda >= 55) {
        return 20;
    }

    if (deuda >= 40) {
        return 10;
    }

    return 0;
}

int evaluarLiquidez(int liquidez) {

    if (liquidez <= 20) {
        return 40;
    }

    if (liquidez <= 40) {
        return 30;
    }

    if (liquidez <= 60) {
        return 20;
    }

    if (liquidez <= 80) {
        return 10;
    }

    return 0;
}

int evaluarIngresos(int ingresos) {

    if (ingresos <= -30) {
        return 40;
    }

    if (ingresos <= -20) {
        return 30;
    }

    if (ingresos <= -10) {
        return 20;
    }

    if (ingresos <= -5) {
        return 10;
    }

    return 0;
}

int evaluarCostos(int costos) {

    if (costos >= 40) {
        return 40;
    }

    if (costos >= 30) {
        return 30;
    }

    if (costos >= 20) {
        return 20;
    }

    if (costos >= 10) {
        return 10;
    }

    return 0;
}

int evaluarPagos(int pagos) {

    if (pagos <= 40) {
        return 40;
    }

    if (pagos <= 60) {
        return 30;
    }

    if (pagos <= 75) {
        return 20;
    }

    if (pagos <= 90) {
        return 10;
    }

    return 0;
}

void mostrarIntroduccion() {

    std::cout << "===============================================\n";
    std::cout << "= MODELO CON IA QUE PREDICE RIESGO FINANCIERO =\n";
    std::cout << "===============================================\n\n";

    std::cout << "Este modelo analiza indicadores financieros clave para estimar el nivel de riesgo de una empresa "
              << "y generar una recomendacion segun su condicion actual.\n\n";

    std::cout << "Niveles de riesgo del modelo siendo nulo el nivel de riesgo mas bajo y terminal el nivel de riesgo mas letal:\n\n";

    std::cout << "Riesgo Nulo\n";
    std::cout << "Riesgo Leve\n";
    std::cout << "Riesgo Marginal\n";
    std::cout << "Riesgo Moderado\n";
    std::cout << "Riesgo Serio\n";
    std::cout << "Riesgo Critico\n";
    std::cout << "Riesgo Mayor\n";
    std::cout << "Riesgo Severo\n";
    std::cout << "Riesgo Catastrofico\n";
    std::cout << "Riesgo Terminal\n\n";

    std::cout << "Para maximizar la precision de la evaluacion, usted debe consultar e ingresar el porcentaje "
              << "correspondiente a estas 6 variables:\n\n";

    std::cout << "1. Variacion de produccion\n";
    std::cout << "2. Nivel de endeudamiento\n";
    std::cout << "3. Liquidez\n";
    std::cout << "4. Variacion de ingresos\n";
    std::cout << "5. Incremento de costos\n";
    std::cout << "6. Cumplimiento de pagos\n\n";

    std::cout << "Ingrese los datos solicitados a continuacion:\n\n";
}

void mostrarResultado(int riesgoTotal) {

    std::cout << "\n=== RESULTADO FINAL ===\n";
    std::cout << "Indice de riesgo: " << riesgoTotal << " / 240\n\n";

    if (riesgoTotal == 0) {
        std::cout << "Categoria: Riesgo Nulo\n";
        std::cout << "La prediccion del sistema indica que la empresa no presenta senales relevantes de deterioro financiero. "
                  << "No se observan variaciones criticas en produccion, deuda, liquidez, ingresos, costos o pagos. "
                  << "Por lo tanto, no hay factores de riesgo inmediatos por los cuales preocuparse. "
                  << "Se recomienda continuar con las politicas actuales de control financiero y monitoreo periodico.\n";
    }
    else if (riesgoTotal <= 24) {
        std::cout << "Categoria: Riesgo Leve\n";
        std::cout << "La prediccion del sistema indica que la empresa presenta pequenas senales de alerta, pero estas no comprometen su estabilidad general. "
                  << "Puede existir una variacion menor en algun indicador financiero, aunque todavia se mantiene dentro de un rango manejable. "
                  << "Se recomienda revisar los indicadores afectados y mantener seguimiento preventivo para evitar que el riesgo aumente.\n";
    }
    else if (riesgoTotal <= 48) {
        std::cout << "Categoria: Riesgo Marginal\n";
        std::cout << "La prediccion del sistema indica que la empresa comienza a mostrar signos marginales de presion financiera. "
                  << "Aunque la situacion no es grave, algunos indicadores pueden estar alejandose de niveles saludables. "
                  << "Se recomienda identificar las variables que aportaron mayor riesgo y aplicar ajustes tempranos en costos, liquidez o gestion de pagos.\n";
    }
    else if (riesgoTotal <= 72) {
        std::cout << "Categoria: Riesgo Moderado\n";
        std::cout << "La prediccion del sistema indica que la empresa enfrenta un nivel moderado de riesgo financiero. "
                  << "Esto puede deberse a caidas en produccion o ingresos, aumento de deuda, menor liquidez o deterioro en el cumplimiento de pagos. "
                  << "Se recomienda elaborar un plan de correccion financiera, controlar gastos y reforzar la administracion del flujo de caja.\n";
    }
    else if (riesgoTotal <= 96) {
        std::cout << "Categoria: Riesgo Serio\n";
        std::cout << "La prediccion del sistema indica que la empresa presenta senales serias de deterioro financiero. "
                  << "El comportamiento de varias variables puede estar afectando la capacidad de operar con estabilidad. "
                  << "Se recomienda revisar urgentemente el nivel de endeudamiento, renegociar obligaciones si es necesario y priorizar la recuperacion de liquidez.\n";
    }
    else if (riesgoTotal <= 120) {
        std::cout << "Categoria: Riesgo Critico\n";
        std::cout << "La prediccion del sistema indica que la empresa se encuentra en una condicion critica. "
                  << "El riesgo financiero es alto y puede estar relacionado con una combinacion de caida de ingresos, baja liquidez, altos costos o endeudamiento elevado. "
                  << "Se recomienda tomar decisiones inmediatas de control, reducir gastos no esenciales y fortalecer las fuentes de ingreso.\n";
    }
    else if (riesgoTotal <= 144) {
        std::cout << "Categoria: Riesgo Mayor\n";
        std::cout << "La prediccion del sistema indica que la empresa enfrenta un riesgo mayor que puede comprometer su continuidad si no se actua rapidamente. "
                  << "Los indicadores muestran un deterioro importante y posiblemente acumulado en varias areas financieras. "
                  << "Se recomienda implementar un plan de reestructuracion financiera, revisar contratos, controlar deuda y proteger el capital de trabajo.\n";
    }
    else if (riesgoTotal <= 168) {
        std::cout << "Categoria: Riesgo Severo\n";
        std::cout << "La prediccion del sistema indica que la empresa presenta un riesgo severo de inestabilidad financiera. "
                  << "La capacidad de cubrir obligaciones, sostener operaciones o mantener ingresos suficientes puede estar seriamente afectada. "
                  << "Se recomienda activar medidas de emergencia financiera, priorizar pagos esenciales y buscar apoyo externo o asesoria especializada.\n";
    }
    else if (riesgoTotal <= 192) {
        std::cout << "Categoria: Riesgo Catastrofico\n";
        std::cout << "La prediccion del sistema indica que la empresa se encuentra en una situacion financiera extremadamente delicada. "
                  << "Existe una alta probabilidad de incumplimientos, perdida operativa significativa o incapacidad para sostener su actividad normal. "
                  << "Se recomienda una intervencion inmediata, renegociacion profunda de obligaciones y evaluacion de medidas de rescate empresarial.\n";
    }
    else {
        std::cout << "Categoria: Riesgo Terminal\n";
        std::cout << "La prediccion del sistema indica que la empresa presenta un nivel terminal de riesgo financiero. "
                  << "Los indicadores reflejan una condicion extrema que puede implicar insolvencia, interrupcion operativa o imposibilidad de cumplir compromisos financieros. "
                  << "Se recomienda detener decisiones de expansion, preservar recursos disponibles, buscar asesoria financiera urgente y evaluar un proceso formal de reestructuracion.\n";
    }
}

int main() {
std::ios_base::sync_with_stdio(false);

    int produccion;
    int deuda;
    int liquidez;
    int ingresos;
    int costos;
    int pagos;

    int riesgoTotal = 0;

    mostrarIntroduccion();

    std::cout << "Variacion de produccion (%): ";
    std::cin >> produccion;

    std::cout << "Nivel de endeudamiento (%): ";
    std::cin >> deuda;

    std::cout << "Liquidez (%): ";
    std::cin >> liquidez;

    std::cout << "Variacion de ingresos (%): ";
    std::cin >> ingresos;

    std::cout << "Incremento de costos (%): ";
    std::cin >> costos;

    std::cout << "Cumplimiento de pagos (%): ";
    std::cin >> pagos;

    riesgoTotal += evaluarProduccion(produccion);
    riesgoTotal += evaluarEndeudamiento(deuda);
    riesgoTotal += evaluarLiquidez(liquidez);
    riesgoTotal += evaluarIngresos(ingresos);
    riesgoTotal += evaluarCostos(costos);
    riesgoTotal += evaluarPagos(pagos);

    mostrarResultado(riesgoTotal);

    std::cout << "\nProceso finalizado\n";

    return 0;
}
