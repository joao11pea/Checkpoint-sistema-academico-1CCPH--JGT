#include <stdio.h>
 
int main() {
    float nota1 = 0, nota2 = 0, media = 0;
    float a, b, c;
    int opcao;
    int notasInseridas = 0;
 
    while (1) {
        printf("\n==============================\n");
        printf(" SISTEMA EQUIPE XYZ\n");
        printf("==============================\n");
        printf("1 - Inserir notas\n");
        printf("2 - Calcular media\n");
        printf("3 - Verificar \n");
        printf("4 - Exibir resultado\n");
        printf("5 - Calcular derivada\n");
        printf("6 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
 
        switch (opcao) {
 
            case 1: // Inserir notas
                printf("Digite a nota 1: ");
                scanf("%f", &nota1);
 
                printf("Digite a nota 2: ");
                scanf("%f", &nota2);
 
                notasInseridas = 1;
                break;
             case 2: // Calcular média
                if (notasInseridas) {
                    media = (nota1 + nota2) / 2;
                    printf("Media calculada: %.2f\n", media);
                } else {
                    printf("Insira as notas primeiro!\n");
                }
                break;
 
 
            case 3: // Verificar situação
                    if (media >= 7) {
                        printf("Aprovado");
                    } else if (media >= 5) {
                        printf("Recuperacao");
                    } else {
                        printf("Reprovado");
                    }
                break;
 
 
            case 4: // Exibir resultado
                printf("\n------ RESULTADO ------\n");
                printf("Nota 1: %.2f\n", nota1);
                printf("Nota 2: %.2f\n", nota2);
                printf("Media: %.2f\n", media);
                printf("----------------------\n");
                break;
 
                
            case 5: { // Calcular derivada
               float a, b, c;

             printf("Calculo da derivada [f(x) = ax^ + bx + c]\n");

                printf("Digite o coeficiente a:");
                scanf("%f", &a);
                printf("Digite o coeficiente b:");
                scanf("%f", &b);
                printf("Digite o coeficiente c:");
                scanf("%f", &c);

                float deriv_a = 2 * a;
                float deriv_b = b;
                printf("\nFuncao: f'(x) = %.0fx + %.0f\n", deriv_a, deriv_b);

 
                break;
            }
 
 
            case 6: // Sair
                printf("Saindo do sistema...\n");
                return 0;
 
 
            default:
                printf("Opcao invalida!\n");
 
                   return 0;
        }
    }
 
}