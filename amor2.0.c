#include <stdio.h>

int main ()
{   int beijo;

    printf("Seu namorado esta com muita saudades e quer beijinho.\n");
    printf("Escolha uma das opcoes a seguir para definir como vc ira proseguir:\n");
    printf("1- Ira dar 1 beijinho so.\n");
    printf("2- Ira dar 2 beijinhos so.\n");
    printf("3- Ira dar beijinhos ate ele morrer.\n");
    printf("Faca sua escolha imediatamente:");
    scanf("%d", &beijo);

    switch (beijo)
    {       case 1: printf("Vc escolheu a opcao: %d - Ira dar so um beijinho :c\n", beijo);
            break;
            case 2: printf("Vc escolheu a opcao: %d - Ira dar 2 beijinho so :c\n", beijo);
            break;
            case 3: printf("Vc escolheu a opcao: %d - Ira matar ele <3", beijo);
            break;
            default: printf("Vc nao escolheu nenhum, mas te amo ainda.");
    }

    return 0;
}