#include <stdio.h>

int main(void){
float nota1, nota2, nota3, media;
    printf("Essa er a calculadora de medias, por gentileza...\n");
    printf("Digite a primeira nota: ");scanf("%f", &nota1);
    printf("Digite a segunda  nota: ");scanf("%f", &nota2);
    printf("Digite a terceira  nota: ");scanf("%f", &nota3);

media = (nota1 + nota2 + nota3) / 3;

printf("A media desse aluno er: %.1f", media);

   return 0;
}
