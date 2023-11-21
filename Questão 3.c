
#include <stdio.h>
#include <ctype.h>
#include <string.h>

    int main(){
    char dias[20];
    char placa[9];

scanf("%s", placa);  

while (getchar() != '\n');

scanf(" %19[^\n]",dias);
  

        if((dias[0]== 'S' && dias[1] == 'E' && dias[2] == 'G') && (placa[7] == '0' || placa[7] == '1')){
            printf("%s nao pode circular segunda-feira\n",placa);
            return 0;
        }
        
   
        if((dias[0]== 'T' && dias[1] == 'E' && dias[2] == 'R') && (placa[6] == '2' || placa[7] == '3')){
            printf("%s nao pode circular terca-feira\n",placa);
            return 0;
        }

        if((dias[0]== 'Q' && dias[1] == 'U' && dias[2] == 'A') && (placa[6] == '4' || placa[7] == '5')){
            printf("%s nao pode circular quarta-feira\n",placa);
            return 0;
        }

        if((dias[0]== 'Q' && dias[1] == 'U' && dias[2] == 'I') && (placa[6] == '6' || placa[7] == '7')){
            printf("%s nao pode circular quinta-feira\n",placa);
            return 0;
        }

        if((dias[0]== 'S' && dias[1] == 'E' && dias[2] == 'X') && (placa[6] == '8' || placa[7] == '9')){
            printf("%s nao pode circular sexta-feira\n",placa);
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

        if((dias[0]== 'S' && dias[1] == 'E' && dias[2] == 'G') && (placa != 0 || 1)){
            printf("%s pode circular segunda-feira\n",placa);
            return 0;
        }

        if((dias[0]== 'T' && dias[1] == 'E' && dias[2] == 'R') && (placa != 2 ||3)){
            printf("%s pode circular terca-feira\n",placa);
            return 0;
        }

        if((dias[0]== 'Q' && dias[1] == 'U' && dias[2] == 'A') && (placa != 4 || 5)){
            printf("%s pode circular quarta-feira\n",placa);
            return 0;
        }

        if((dias[0]== 'Q' && dias[1] == 'U' && dias[2] == 'I') && (placa != 6 || 7)){
            printf("%s pode circular quinta-feira\n",placa);
            return 0;
        }

        if((dias[0]== 'S' && dias[1] == 'E' && dias[2] == 'X') && (placa != 8 ||9)){
            printf("%s pode circular sexta-feira\n",placa);
            return 0;
        }


        //if((dias[0]== 'S' && dias[1] == 'E' && dias[2] == 'G') && (placa[7] == != 0 ||placa[7]== != 1)){
            //printf("%s pode circular segunda-feira\n",placa);
           // return 0;
        //}
        
        return 0;
    }
        
