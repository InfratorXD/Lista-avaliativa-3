#include <stdio.h>
#include <ctype.h>
#include <string.h>
//criar uma validação pros dias, como "QUINTA-FEIRA", "SEXTA-FEIRA"..., e puxar a função la pra baixo
int Placas(char *placa) {
    if (strlen(placa) == 8 &&
        isalpha(placa[0]) && isalpha(placa[1]) && isalpha(placa[2]) &&
        placa[3] == '-' &&
        isdigit(placa[4]) && isdigit(placa[5]) && isdigit(placa[6]) && isdigit(placa[7])) {
        return 1;
    }

    if (strlen(placa) == 7 &&
        isalpha(placa[0]) && isalpha(placa[1]) && isalpha(placa[2]) &&
        isdigit(placa[3]) && isalpha(placa[4]) && isdigit(placa[5]) && isdigit(placa[6])) {
        return 1;
    }

    return 0;
}

int validarDiaSemana(char *dia) {
    char *diasSemana[] = {"SEGUNDA-FEIRA", "TERCA-FEIRA", "QUARTA-FEIRA", "QUINTA-FEIRA", "SEXTA-FEIRA", "SABADO", "DOMINGO"};

    for (int i = 0; i < 7; i++) {
        if (strcmp(dia, diasSemana[i]) == 0) {
            return 1; 
        }
    }

    return 0; 
}

int main() {
    char dias[20];
    char placa[12];

    fgets(placa, sizeof(placa), stdin);
    placa[strcspn(placa, "\n")] = '\0';

    fgets(dias, sizeof(dias), stdin);
    dias[strcspn(dias, "\n")] = '\0';


    
        if(!Placas(placa)&&(!validarDiaSemana(dias))) {
        printf("Placa invalida\n");
        printf("Dia da semana invalido\n");
            return 0;
        }

        if(!Placas(placa)&&(!validarDiaSemana(dias))) {
        printf("Placa invalida\n");
        printf("Dia da semana invalido\n");
            return 0;
        }
        if(!Placas(placa)&&(!validarDiaSemana(dias))){
            printf("Placa invalida\n");
            printf("Dia da semana invalido\n");
            return 0;
        }
        if(!Placas(placa)&&(!validarDiaSemana(dias))){
            printf("Placa invalida\n");
            printf("Dia da semana invalido\n");
            return 0;
        }
        if(!Placas(placa)&&(!validarDiaSemana(dias))){
            printf("Placa invalida\n");
            printf("Dia da semana invalido\n");
            return 0;
        }
        if(!Placas(placa)&&(!validarDiaSemana(dias))){
            printf("Placa invalida\n");
            printf("Dia da semana invalido\n");
            return 0;
        }
        if(!Placas(placa)&&(!validarDiaSemana(dias))){
            printf("Placa invalida\n");
            printf("Dia da semana invalido\n");
            return 0;
        }

  if (!validarDiaSemana(dias)) {
        printf("Dia da semana invalido\n");
        return 0;
    }

    if (!Placas(placa)) {
        printf("Placa invalida\n");
        return 0;
    }
   
    char ultimo_caractere = placa[strlen(placa) - 1];
  
        if((dias[0] == 'S' && dias[1] == 'E' && dias[2] == 'G') && (ultimo_caractere == '0' || ultimo_caractere == '1')) {
    printf("%s nao pode circular segunda-feira\n", placa);
    return 0;
}

if((dias[0] == 'T' && dias[1] == 'E' && dias[2] == 'R') && (ultimo_caractere == '2' || ultimo_caractere == '3')) {
    printf("%s nao pode circular terca-feira\n", placa);
    return 0;
}

if((dias[0] == 'Q' && dias[1] == 'U' && dias[2] == 'A') && (ultimo_caractere == '4' || ultimo_caractere == '5')) {
    printf("%s nao pode circular quarta-feira\n", placa);
    return 0;
}

if((dias[0] == 'Q' && dias[1] == 'U' && dias[2] == 'I') && (ultimo_caractere == '6' || ultimo_caractere == '7')) {
    printf("%s nao pode circular quinta-feira\n", placa);
    return 0;
}

if((dias[0] == 'S' && dias[1] == 'E' && dias[2] == 'X') && (ultimo_caractere == '8' || ultimo_caractere == '9')) {
    printf("%s nao pode circular sexta-feira\n", placa);
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

        if((dias[0]== 'S' && dias[1] == 'E' && dias[2] == 'G') && (ultimo_caractere != '0' && ultimo_caractere != '1')){
            printf("%s pode circular segunda-feira\n",placa);
            return 0;
        }

        if((dias[0]== 'T' && dias[1] == 'E' && dias[2] == 'R') && (ultimo_caractere != '2' && ultimo_caractere !='3')){
            printf("%s pode circular terca-feira\n",placa);
            return 0;
        }

        if((dias[0]== 'Q' && dias[1] == 'U' && dias[2] == 'A') && (ultimo_caractere != '4' && ultimo_caractere != '5')){
            printf("%s pode circular quarta-feira\n",placa);
            return 0;
        }

        if ((dias[0] == 'Q' && dias[1] == 'U' && dias[2] == 'I') && (ultimo_caractere != '6' && ultimo_caractere != '7')) {
    printf("%s pode circular quinta-feira\n", placa);
    return 0;
}

if ((dias[0] == 'S' && dias[1] == 'E' && dias[2] == 'X') && (ultimo_caractere != '8' && ultimo_caractere != '9')) {
    printf("%s pode circular sexta-feira\n", placa);
    return 0;
}
        return 0;
    }
        