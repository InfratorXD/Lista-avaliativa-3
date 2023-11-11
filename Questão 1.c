#include <stdio.h>

int main() {
  char romanos[12];
  int i;
  int valor_antes = 0;
  int valor_atual = 0;
  int resultado = 0;
  int resultado_binario;
  int binario[32];
  int j = 0;
  int resultado_hexa;
  int hexa;

   scanf("%s",romanos);

  for(i = 0; romanos[i] != '\0'; i++){
  switch(romanos[i]){
    case 'I':
    valor_atual = 1;
    break;
    case 'V': 
    valor_atual = 5;
    break;
    case 'X': 
      valor_atual = 10;
    break;
    case 'L':
      valor_atual = 50;
    break;
    case 'C':
      valor_atual = 100;
    break;
    case 'D': 
      valor_atual = 500;
    break;
    case 'M': 
      valor_atual = 1000;
    break;
  }
  if(valor_antes < valor_atual){
   resultado += valor_atual - 2 * valor_antes;
  }
  else {
    resultado += valor_atual;
  }
  valor_antes = valor_atual;
  }

  resultado_binario = resultado;
  resultado_hexa = resultado;

  printf("%s na base 2: ", romanos);
  if(resultado_binario == 0){
    printf("0");
  }
  
  while (resultado_binario > 0){
    binario[j] = resultado_binario % 2;
     resultado_binario = resultado_binario / 2;
     j++;
  }

    for(int k = j - 1; k >= 0; k--){
      printf("%d",binario[k]);
    }
    printf("\n");

  printf("%s na base 10: %d\n", romanos, resultado);

printf("%s na base 16: %x\n", romanos, resultado_hexa); // %x, o resultado sai em hexa

return 0;
}