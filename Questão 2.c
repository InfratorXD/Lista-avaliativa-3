#include <stdio.h>
#include <math.h>

    int main(){
    double valor_total;
    int aporte_mensal;
    double juros;
    int mes;
    int mes_investido;

    scanf("%d", &mes);
    scanf("%d", &aporte_mensal);
    scanf("%lf", &juros);

mes_investido = mes;

    for(int i = 1; i <= mes; i++){
    valor_total = aporte_mensal * ((pow(1 + juros,i) - 1)/ juros)*(1 + juros);
    printf("Montante ao fim do mes %d R$ %.2lf\n", i, valor_total);
    }

        return 0;
    }