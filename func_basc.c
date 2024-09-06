#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int procRRN;
    int nroRegRem;
    int nrroPagDisco;
    int qttCompac;
    char status;

} cabecalho;

typedef struct{
    int população;
    char nome[50];
    char especie[50];
    char habitat[50];
    char dieta[50];
    char alimento[50];
    char tipo[50];


    float tamanho;
    char medida;
    int velocidade;
    int encadeamento;
    char removido;

} registro;

void lerCSV (char *narqv) {
    FILE *arq = fopen(narqv, "r");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo\n");
        return;
    }
    fclose(arq);
}