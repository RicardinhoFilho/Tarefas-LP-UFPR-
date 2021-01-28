#include <stdio.h>
#define TAMANHO 9

int jogoInicial[TAMANHO][TAMANHO]=
{
	{9, 4, 0, 1, 0, 2, 0, 5, 8},
    {6, 0, 0, 0, 5, 0, 0, 0, 4},
    {0, 0, 2, 4, 0, 3, 1, 0, 0},
    {0, 2, 0, 0, 0, 0, 0, 6, 0},
    {5, 0, 8, 0, 2, 0, 4, 0, 1},
    {0, 6, 0, 0, 0, 0, 0, 8, 0},
    {0, 0, 1, 6, 0, 8, 7, 0, 0},
    {7, 0, 0, 0, 4, 0, 0, 0, 3},
    {4, 3, 0, 5, 0, 9, 0, 1, 2}
};

void valoresAusentesLinha(int linha, int *vetor, int opcao)
{
    int lin, col;
for (lin = linha; lin < linha + 1; lin++)
        {
            for (col = 0; col < TAMANHO; col++)
            {

                if (jogoInicial[lin][col])
                {
                    vetor[jogoInicial[lin][col] - 1] = 0;
                }
            }
        }
        if (opcao == 1)
        {
           for (int i = 0; i < TAMANHO; i++)
        {
            printf(" %d \n", vetor[i]);
        }
        }
}
void valorAusentesColuna(int coluna, int *vetor, int opcao)
{
    int col, lin;
    for (col = coluna; col < coluna + 1; col++)
        {
            for (lin = 0; lin < TAMANHO; lin++)
            {
                if (jogoInicial[lin][coluna])
                {
                    vetor[jogoInicial[lin][col] - 1] = 0;
                }
            }
        }
       if (opcao == 2)
    {
       for (int i = 0; i < TAMANHO; i++)
        {
            if (vetor[i] > 0)
            {
                printf(" %d \n", vetor[i]);
            }
        }
    }
}
void valorAusentesGrupo(int linha, int coluna, int *vetor, int opcao)
{         
        int lin,col;
        int aux_lin = ((int)(linha + 3) / 3) * 3;
        int aux_col = ((int)(coluna + 3) / 3) * 3;
        int aux_lin1 = (((int)(linha + 3) / 3) * 3) - 3;
        int aux_col1 = (((int)(coluna + 3) / 3) * 3) - 3;

        
        for (int i = coluna; i < coluna + 1; i++)
        {

            for (lin = aux_lin1; lin < aux_lin; lin++)
            {
                for (col = aux_col1; col < aux_col; col++)
                {
                    if (jogoInicial[lin][col])
                    {
                        vetor[(jogoInicial[lin][col]) - 1] = 0;
                    }
                }
            }
        }
     //if (opcao == 3)
   // {
       for (int i = 0; i < TAMANHO; i++)
        {
            if (vetor[i] > 0)
            {
                printf(" %d \n", vetor[i]);
            }
        }
    //}

}
void ComparaVetores(int linha, int coluna, int opcao)
{
    if (jogoInicial[linha][coluna] == 0)
    {
        int vet_padrao[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        int vet_imp[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        int lin, col;
        int vet_linha[TAMANHO] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        valoresAusentesLinha(1,vet_linha,opcao);
        int vet_coluna[TAMANHO] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        valorAusentesColuna(coluna,vet_coluna,opcao);
        int vet_grupo[TAMANHO] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        valorAusentesGrupo(linha,coluna,vet_grupo,opcao);
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
                printf(" %d \n", vet_padrao[i]);
            }
            else if (vet_imp[i] > 0 && opcao == 5)
            {
                printf(" %d \n", vet_imp[i]);
            }
        }
        if (opcao == 6)
        {
            printf("%d possibilidades!\n", cont);
        }
    }
    else
    {
        printf("Esta Célula já está preenchida");
    }
}

int main (void)
{
    //ComparaVetores(0,2,1);
    ComparaVetores(0,2,4);

}
