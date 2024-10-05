#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, media;
    printf("Informe a sua 1a. nota:");
    scanf("%f", &nota1);

    printf("Informa sua 2a. nota:");
    scanf("%f", &nota2);

    media = (nota1 + nota2)/2;
    printf("Sua nota é: %f", media);

    if(media >=7) {
        printf("APROVADO");
    } else {
        printf("REPROVADO");
    }
return 0;
}
