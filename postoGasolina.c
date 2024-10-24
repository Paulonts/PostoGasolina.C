#include <stdio.h>
int main()
{
    float litroAlcool = 0;
    float litroAlcoolDesconto = 0;
    float precoAlcoolPagar = 0;
    float valorAlcool = 2.90;
    float aAlcool = 0;
    float alcoolDia = 0;
    float dinheiroDiaAlcool = 0;

    int opcao;

    float litroGasolina = 0;
    float precoGasolinaPagar = 0;
    float valorGasolina = 3.30;
    float litroGasolinaDesconto = 0;
    float gGasolina = 0;
    float gasolinaDia = 0;
    float dinheiroDiaGasolina = 0;

    while (1)
    {
        printf("---menu---\n");
        printf("Para alcool digite '1'\n");
        printf("Para gasolina digite '2'\n");
        printf("Fechar caixa '3'\n");

        scanf("%d", &opcao);

        switch (opcao)
        {
        case (1):

            printf("Digite a quantidade de alcool que deseja em litros: ");
            scanf("%f", &litroAlcool);

            if (litroAlcool <= 20 && litroAlcool > 0)
            {

                precoAlcoolPagar = litroAlcool * valorAlcool;
                litroAlcoolDesconto = (((precoAlcoolPagar * 3) / 100));
                aAlcool = ((litroAlcoolDesconto - precoAlcoolPagar) * -1);
            }
            else
            {

                precoAlcoolPagar = litroAlcool * valorAlcool;
                litroAlcoolDesconto = (((precoAlcoolPagar * 5) / 100));
                aAlcool = ((litroAlcoolDesconto - precoAlcoolPagar) * -1);
            }

            alcoolDia += litroAlcool;
            dinheiroDiaAlcool += aAlcool;

            printf("O valor sem desconto: %.2f\n", precoAlcoolPagar);
            printf("Desconto recebido: %.2f\n", litroAlcoolDesconto);
            printf("O valor com desconto: %.2f\n", aAlcool);

            break;

        case 2:
            printf("Digite a quantidade de gasolina que deseja em litros: ");
            scanf("%f", &litroGasolina);

            if (litroGasolina <= 20 && litroGasolina > 0)
            {

                precoGasolinaPagar = litroGasolina * valorGasolina;
                litroGasolinaDesconto = (((precoGasolinaPagar * 4) / 100));
                gGasolina = ((litroGasolinaDesconto - precoGasolinaPagar) * -1);
            }
            else
            {

                precoGasolinaPagar = litroGasolina * valorGasolina;
                litroGasolinaDesconto = (((precoGasolinaPagar * 6) / 100));
                gGasolina = ((litroGasolinaDesconto - precoGasolinaPagar) * -1);
            }

            gasolinaDia += litroGasolina;
            dinheiroDiaGasolina += gGasolina;

            printf("O valor sem desconto: %.2f\n", precoGasolinaPagar);
            printf("Desconto recebido: %.2f\n", litroGasolinaDesconto);
            printf("O valor com desconto: %.2f\n", gGasolina);

            break;

        case 3:

            printf("Caixa fechado\n");
            printf("Exibindo resultado do dia\n");
            printf("");
            printf("a quantidade em litros de alcool vendida no dia foi: %.2f\n", alcoolDia);
            printf("a quantidade de alcool vendida no dia em dinehiro foi: %.2f\n", dinheiroDiaAlcool);
            printf("");
            printf("a quantidade de gasolina vendida no dia foi: %.2f\n", gasolinaDia);
            printf("a quantidade de alcool vendida no dia em dinehiro foi: %.2f\n", dinheiroDiaGasolina);
            return 0;

        default:
            break;
        }
    }

    return 0;
}