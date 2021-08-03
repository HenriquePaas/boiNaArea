#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  float gmd, pesoInicial, calculo, qtdDias, soma = 0;
  char brinco[2];
  int desejado, desejado_qtdAreas, contador = 0;

  printf("Informe a quantidade de animais para serem cadastrados: ");
  scanf("%d", &desejado);

  for (int i = 0; i < desejado; i++){
  	
    soma = calculo = 0; // reset das variaveis utilizadas nos calculos
    contador = contador + 1;
    
    printf("Informe o codigo do brinco do %d animal: ", contador);
    scanf("%s", brinco);

    printf("Informe o peso inicial do animal: ");
    scanf("%f", &pesoInicial);

    printf("Informe a quantidade total de areas que esse animal vai passar: ");
    scanf("%d", &desejado_qtdAreas);

    for (int j = 0; j < desejado_qtdAreas; j++){

      printf("Informe o total de dias que o animal vai ficar nessa area: ");
      scanf("%f", &qtdDias);

      printf("Informe o GMD da area: ");
      scanf("%f", &gmd);

      soma = soma + (gmd * qtdDias);
    }
    calculo = pesoInicial + soma;
    printf("\nCOM ESSE PLANO O ANIMAL:  %s \nFECHOU COM O PESO DE: %0.2f KG\n\n", brinco, calculo);
  }

  return 0;
}
