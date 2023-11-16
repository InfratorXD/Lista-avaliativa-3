#include <stdio.h>
#include <ctype.h>
#include <string.h>

    int main(){
    char placa_letra[5];
    int placa_digito;
    char dias[20];




scanf("%3s-%d", placa_letra, &placa_digito);  


while (getchar() != '\n');

scanf(" %19[^\n]",dias);
  
if (placa_digito < 0 || placa_digito > 9999 || strlen(placa_letra) != 3) {
        printf("Placa invalida\n");
        return 0;
      }

    

        if((dias[0]== 'S' && dias[1] == 'E' && dias[2] == 'G') && (placa_digito %10 == 0 || placa_digito %10 == 1)){
            printf("%s-%d nao pode circular segunda-feira\n",placa_letra, placa_digito);
            return 0;
        }
        
   
        if((dias[0]== 'T' && dias[1] == 'E' && dias[2] == 'R') && (placa_digito %10 == 2 || placa_digito %10 == 3)){
            printf("%s-%d nao pode circular terca-feira\n",placa_letra, placa_digito);
            return 0;
        }

        if((dias[0]== 'Q' && dias[1] == 'U' && dias[2] == 'A') && (placa_digito %10 == 4 || placa_digito %10 == 5)){
            printf("%s-%d nao pode circular quarta-feira\n",placa_letra, placa_digito);
            return 0;
        }

        if((dias[0]== 'Q' && dias[1] == 'U' && dias[2] == 'I') && (placa_digito %10 == 6 || placa_digito %10 == 7)){
            printf("%s-%d nao pode circular quinta-feira\n",placa_letra, placa_digito);
            return 0;
        }

        if((dias[0]== 'S' && dias[1] == 'E' && dias[2] == 'X') && (placa_digito %10 == 8 || placa_digito %10 == 9)){
            printf("%s-%d nao pode circular sexta-feira\n",placa_letra, placa_digito);
            return 0;
        }

         if((dias[0]== 'S' && dias[1] == 'A' && dias[2] == 'B')){
            printf("Nao ha proibicao no fim de semana\n");
            return 0;
        }

    
         if((dias[0]== 'D' && dias[1] == 'O' && dias[2] == 'M')){
            printf("Nao ha proibicao no fim de semana\n");
            return 0;
        }


        if((dias[0]== 't' && dias[1] == 'e' && dias[2] == 'r')){
            printf("Dia da semana invalido\n");
            return 0;
        }
        if((dias[0]== 'q' && dias[1] == 'u' && dias[2] == 'a')){
            printf("Dia da semana invalido\n");
            return 0;
        }
        if((dias[0]== 'q' && dias[1] == 'u' && dias[2] == 'i')){
            printf("Dia da semana invalido\n");
            return 0;
        }
        if((dias[0]== 's' && dias[1] == 'e' && dias[2] == 'x')){
            printf("Dia da semana invalido\n");
            return 0;
        }
        if((dias[0]== 's' && dias[1] == 'a' && dias[2] == 'b')){
            printf("Dia da semana invalido\n");
            return 0;
        }
        if((dias[0]== 'd' && dias[1] == 'o' && dias[2] == 'm')){
            printf("Dia da semana invalido\n");
            return 0;
        }

            
        if((dias[0]== 'S' && dias[1] == 'E' && dias[2] == 'G') && (placa_digito != 0 ||1)){
            printf("%s-%d pode circular segunda-feira\n",placa_letra, placa_digito);
            return 0;
        }

        if((dias[0]== 'T' && dias[1] == 'E' && dias[2] == 'R') && (placa_digito != 2 ||3)){
            printf("%s-%d pode circular terca-feira\n",placa_letra, placa_digito);
            return 0;
        }

        if((dias[0]== 'Q' && dias[1] == 'U' && dias[2] == 'A') && (placa_digito != 4 ||5)){
            printf("%s-%d pode circular quarta-feira\n",placa_letra, placa_digito);
            return 0;
        }

        if((dias[0]== 'Q' && dias[1] == 'U' && dias[2] == 'I') && (placa_digito != 6 ||7)){
            printf("%s-%d pode circular quinta-feira\n",placa_letra, placa_digito);
            return 0;
        }

        if((dias[0]== 'S' && dias[1] == 'E' && dias[2] == 'X') && (placa_digito != 8 ||9)){
            printf("%s-%d pode circular sexta-feira\n",placa_letra, placa_digito);
            return 0;
        }

        return 0;
    }
        