#include <stdio.h>

int main()
{

float kg_macas = 0.0;
float kg_morangos = 0.0;
float total_macas = 0.0;
float total_morangos = 0.0;
float total_compras = 0.0;

    printf("\ndigite o valor em kg de macas: ");
    scanf("%f", &kg_macas);

    printf("\ndigite o valor em kg de morangos: ");
    scanf("%f", &kg_morangos);

    if(kg_macas <= 5.0)
    {
        total_macas = kg_macas * 3.8;
    }
    else
    {
        total_macas = kg_macas * 3.5;
    }

    if(kg_morangos <= 5.0)
    {
        total_morangos = kg_morangos * 6.5;
    }
    else
    {
        total_morangos = kg_morangos * 6.2;
    }

    total_compras = total_macas + total_morangos;

    if(kg_morangos + kg_macas >= 10.0 || total_compras >= 50.0)
    {
        total_compras = total_compras * 0.90;
    }

    printf("\no valor a pagar eh de R$%.2f", total_compras);

    return 0;
}