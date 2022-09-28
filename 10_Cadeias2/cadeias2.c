#include <stdio.h>

char cadeia[21]             = "" ;
// char cadeia_invertida[21]   = "" ;

int main ( int argc, char * argv[]){

    int i = 0;                                                                  // nao é necessário inicializa. Será feito no ciclo for

    printf ("\nIntroduza uma cadeia de valores (máx. 20 caracteres): ");

    scanf ("%s", cadeia);                                                       // nas strings nao é necessário o & (vamos ver isto)
    printf("\n\n");
    printf("introduzida a cadeia '%s'\n", cadeia);
    printf("Invertida fica: '");

    for ( i = 0 ; i < 21 ; i++) {
        printf ("%c", cadeia[ 20 - i ]);                                        // funciona corretamente nas novas versoes de C (em Linux, pelo menos)
    }

    printf("'\n\n");
    return 0;
}