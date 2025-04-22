#include <stdio.h>

int main() {

    // Mensagem inicial
    printf("*****************************************\n");
    printf("     Bem-vinda(o) a Supera Virtual!    \n");
    printf("Sua professora do SUPERA, quando voce nao esta em casa,\n");
    printf("para ajudar com a licao de casa do livro abaco  do curso SUPERA!\n");
    printf("*****************************************\n\n");
    printf("Este programa e exclusivo para a Base 5! Vamos la?\n\n");

    unsigned int num_1;
    unsigned int num_2;

    // Leitura dos dois numeros
    printf("Para saber qual a ordem no abaco, insira os 2 numeros da operacao na ordem que deseja\n");
    scanf(" %u %u", &num_1, &num_2);

    // Exibindo os numeros inseridos
    printf("\nVoce inseriu os numeros: %u e %u\n", num_1, num_2);

    unsigned int op;

    // Leitura da operação
    printf("\nEscolha a operacao: 1 para subtracao e 2 para adicao\n");
    scanf(" %u", &op);

    // Exibindo a operação escolhida
    if (op == 1) {
        printf("\nA operacao escolhida foi: %u - %u\n", num_1, num_2);
    } else if (op == 2) {
        printf("\nA operacao escolhida foi: %u + %u\n", num_1, num_2);
    }

    // Subtração
    if (op == 1) {
        printf("A operacao e %u - %u\n", num_1, num_2);

        unsigned int unidades_de_1 = num_1 % 5;  // Resto da divisao de num_1 por 5
        unsigned int unidades_de_5 = num_1 / 5;  // Quantidade de unidades de 5

        // Verificando se o numero de unidades de 1 e suficiente para a subtracao
        if (num_2 <= unidades_de_1) {
            printf("Podemos subtrair diretamente, pois temos unidades suficientes de 1.\n");
            printf("Resultado: %u\n", num_1 - num_2);
        } else {
            // Caso nao tenha unidades suficientes, ajusta o numero
            unsigned int ajuste = 5 - (num_2 % 5);  // A diferenca entre o numero que queremos subtrair e 5
            unsigned int unidades_de_1_para_somar = ajuste;
            unsigned int num_ajustado = num_1 + ajuste;

            printf("Nao podemos subtrair diretamente. Vamos ajustar!\n");
            printf("Faca a diferenca de 5 - %u!\n", num_2);
            printf("Voce vai somar essa diferenca (%u unidades de 1) ao abaco!\n", unidades_de_1_para_somar);
            printf("Numero atual no abaco: %u\n", num_ajustado);

            // Agora subtrai o valor ajustado
            unsigned int resultado_ajustado = num_ajustado - 5;

            printf("Subtraindo o excedente (5): %u - 5 = %u\n", num_ajustado, num_2, resultado_ajustado);
            printf("O resultado que deve estar no abaco e de: %u\n", resultado_ajustado);
        }
    }

    // Adição
    if (op == 2) {
        printf("A operacao e %u + %u\n", num_1, num_2);

        // ADICAO base 5
        unsigned int soma = num_1 + num_2;

        // Verificando se a soma é menor ou igual a 9
        if (soma <= 9) {
            printf("A soma cabe diretamente no abaco! Resultado: %u\n", soma);
        } else {
            // Caso a soma ultrapasse 9, precisamos ajustar
            unsigned int ajuste = soma - 9; // Ajuste necessário para não ultrapassar o limite
            printf("Nao cabe diretamente no abaco. Vamos fazer o seguinte:\n");
            printf("Soma = %u. Ajuste para o limite de 9: %u\n", soma, ajuste);
            printf("O resultado que deve estar no abaco e de: 9\n");
        }
    }

    return 0;
}

