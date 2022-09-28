// Programa para criação de um vetor de caracteres (cadeia de caracteres)
// com um valor  pré estabelecido. 
// Em seguida deverá percorrer todas as posiçoes da cadeia e apresentar o
// seu valor na consola.
// ECL - Rui Mata 2022

#include <stdio.h>
                 //123456789012345678901234567890
char escola[30] = "Escola de Comércio de Lisboa";

int main ( int argc, char * argv[]){

    int i = 0;                                                                  // nao é necessário inicializa, pois será inicializado no ciclo for

    for (i = 0; i < 30 ; i++ ) {
        printf("%c", escola[i]);
    }

    printf("\n\n");
    return 0;
}