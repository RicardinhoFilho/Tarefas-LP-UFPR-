/*  Trabalho 1 - Passos para resolver o sudoku
 *  Autor: Ricardo Pinto Giasson Filho
 *  GRR: 20204465
 *  Data: Janeiro 2021
 */
#include <stdio.h>
#define TAMANHO 9
void menu();
void desenha_sudoku();
void valoresAusentesLinha(int linha);
void valoresAusentesColuna(int coluna);
void valoresAusentesGrupo(int linha, int coluna);
void ComparaVetores(int linha, int coluna, int opcao);

void menu()
{
    printf("\n\n                                 MENU\n\n\n");
    printf("1-Valores Ausentes nas Linhas		2-Valores Ausentes nas Colunas\n\n");
    printf("3-Valores Ausentes nos Grupos		4-Valores Possiveis nas Celulas\n\n");
    printf("5-Valores Impossiveis nas Celulas	6-Quantidade de valores possíveis por célula\n\n");
    printf("0-Sair\n\n\n");
}
int jogoInicial[9][9] = {{9, 4, 0, 1, 0, 2, 0, 5, 8},
                         {6, 0, 0, 0, 5, 0, 0, 0, 4},
                         {0, 0, 2, 4, 0, 3, 1, 0, 0},
                         {0, 2, 0, 0, 0, 0, 0, 6, 0},
                         {5, 0, 8, 0, 2, 0, 4, 0, 1},
                         {0, 6, 0, 0, 0, 0, 0, 8, 0},
                         {0, 0, 1, 6, 0, 8, 7, 0, 0},
                         {7, 0, 0, 0, 4, 0, 0, 0, 3},
                         {4, 3, 0, 5, 0, 9, 0, 1, 2}};
void desenha_sudoku()
{
    int i, j;
    printf("\n ----------------------------------\n");
    for (i = 0; i < 9; i++)
    {
        printf("|");
        for (j = 0; j < 9; j++)
        {
            printf(" %d ", jogoInicial[i][j]);
            if ((j + 1) % 3 == 0)
            {
                printf(" | ");
            }
        }

        if ((i + 1) % 3 == 0)
        {
            printf("\n ----------------------------------");
        }

        printf("\n");
    }
}

void valoresAusentesLinha(int linha)
{
    int lin, col = 0;
    int vet_padrao[TAMANHO] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (lin = linha; lin < linha + 1; lin++)
    {
        printf("Linha %d -> ", lin);
        for (col = 0; col < TAMANHO; col++)
        {

            if (jogoInicial[lin][col])
            {
                vet_padrao[jogoInicial[lin][col] - 1] = 0;
            }
        }
        for (int i = 0; i < TAMANHO; i++)
        {
            if (vet_padrao[i] > 0)
            {
                printf(" %d ", vet_padrao[i]);
            }
        }

        printf("\n");
    }
}

void valoresAusentesColuna(int coluna)
{

    int lin, col = 0;
    int vet_padrao[TAMANHO] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (col = coluna; col < coluna + 1; col++)
    {
        printf("Coluna %d -> ", col);
        for (lin = 0; lin < TAMANHO; lin++)
        {
            if (jogoInicial[lin][coluna])
            {
                vet_padrao[jogoInicial[lin][col] - 1] = 0;
            }
        }
        for (int i = 0; i < TAMANHO; i++)
        {
            if (vet_padrao[i] > 0)
            {
                printf(" %d ", vet_padrao[i]);
            }
        }

        printf("\n");
    }
}

void valoresAusentesGrupo(int linha, int coluna)
{
    int i, grup, lin, col;
    int aux_lin = ((int)(linha + 3) / 3) * 3;
    int aux_col = ((int)(coluna + 3) / 3) * 3;
    int aux_lin1 = (((int)(linha + 3) / 3) * 3) - 3;
    int aux_col1 = (((int)(coluna + 3) / 3) * 3) - 3;
    int cont = 0;
    //printf("AUX = %d %d ", aux_lin1,aux_col1);
    int vet_padrao[TAMANHO] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (i = coluna; i < coluna + 1; i++)
    {

        for (lin = aux_lin1; lin < aux_lin; lin++)
        {
            for (col = aux_col1; col < aux_col; col++)
            {
                if (jogoInicial[lin][col])
                {
                    vet_padrao[(jogoInicial[lin][col]) - 1] = 0;
                }
            }
        }
        for (int j = 0; j < TAMANHO; j++)
        {
            if (vet_padrao[j] > 0)
            {
                printf(" %d ", vet_padrao[j]);
            }
        }
    }
}

void ComparaVetores(int linha, int coluna, int opcao)
{
    if (jogoInicial[linha][coluna] == 0)
    {
        int vet_padrao[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        int vet_imp[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        int lin, col = 0;
        int vet_linha[TAMANHO] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        for (lin = linha; lin < linha + 1; lin++)
        {
            for (col = 0; col < TAMANHO; col++)
            {

                if (jogoInicial[lin][col])
                {
                    vet_linha[jogoInicial[lin][col] - 1] = 0;
                }
            }
        }
        lin, col = 0;
        int vet_coluna[TAMANHO] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        for (col = coluna; col < coluna + 1; col++)
        {
            for (lin = 0; lin < TAMANHO; lin++)
            {
                if (jogoInicial[lin][coluna])
                {
                    vet_coluna[jogoInicial[lin][col] - 1] = 0;
                }
            }
        }
        int aux_lin = ((int)(linha + 3) / 3) * 3;
        int aux_col = ((int)(coluna + 3) / 3) * 3;
        int aux_lin1 = (((int)(linha + 3) / 3) * 3) - 3;
        int aux_col1 = (((int)(coluna + 3) / 3) * 3) - 3;

        int vet_grupo[TAMANHO] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        for (int i = coluna; i < coluna + 1; i++)
        {

            for (lin = aux_lin1; lin < aux_lin; lin++)
            {
                for (col = aux_col1; col < aux_col; col++)
                {
                    if (jogoInicial[lin][col])
                    {
                        vet_grupo[(jogoInicial[lin][col]) - 1] = 0;
                    }
                }
            }
        }
        int cont;
        for (int i = 0; i < TAMANHO; i++)
        {
            if ((vet_linha[i] && vet_coluna[i] && vet_grupo[i] != 0))
            {
                vet_imp[i] = 0;
                cont++;
            }
            else
            {
                vet_padrao[i] = 0;
            }
        }
        for (int i = 0; i < TAMANHO; i++)
        {
            if (vet_padrao[i] > 0 && opcao == 4)
            {
                printf(" %d ", vet_padrao[i]);
            }
            else if (vet_imp[i] > 0 && opcao == 5)
            {
                printf(" %d ", vet_imp[i]);
            }
        }
        if (opcao == 6)
        {
            printf("%d possibilidades!", cont);
        }
    }
    else
    {
        printf("Esta Célula já está preenchida");
    }
}
int main()
{
    desenha_sudoku();
    int opcao, linha, coluna;
    menu();
    //scanf("%d",&opcao);
    while (opcao != 0)
    {
        desenha_sudoku();
        printf("\n");

        switch (opcao)
        {
        case 1:
            printf("Defina a Linha X:");
            scanf("%d", &linha);
            printf("Valores Ausentes da Linha[%d]\n\n", linha);
            valoresAusentesLinha(linha);
            break;
        case 2:
            printf("Defina a Coluna Y:");
            scanf("%d", &coluna);
            printf("Valores Ausentes da Coluna[%d]\n\n", coluna);
            valoresAusentesColuna(coluna);
            break;
        case 3:
            printf("Defina o Grupo Z:\n");
            scanf("%d", &linha);
            scanf("%d", &coluna);
            printf("Valores Ausentes do Grupo [%d][%d]\n\n", linha, coluna);
            valoresAusentesGrupo(linha, coluna);
            break;
        case 4:
            printf("Defina a Célula[linha][coluna]:\n");
            scanf("%d", &linha);
            scanf("%d", &coluna);
            printf("Valores Possiveis da Célula [%d][%d]\n\n", linha, coluna);
            ComparaVetores(linha, coluna, opcao);
            break;
        case 5:
            printf("Defina a Célula [linha][coluna]:\n");
            scanf("%d", &linha);
            scanf("%d", &coluna);
            printf("Valores Impossíveis da Célula [%d][%d]\n\n", linha, coluna);
            ComparaVetores(linha, coluna, opcao);
            break;
        case 6:
            printf("Defina a Célula [linha][coluna]:\n");
            scanf("%d", &linha);
            scanf("%d", &coluna);
            printf("Número de Possibilidades da Célula [%d][%d]\n\n", linha, coluna);
            ComparaVetores(linha, coluna, opcao);
            break;
        default:
            printf("Opção Indisponível!");
            break;
        }
        menu();
        scanf("%d", &opcao);
    }
    return 0;
}