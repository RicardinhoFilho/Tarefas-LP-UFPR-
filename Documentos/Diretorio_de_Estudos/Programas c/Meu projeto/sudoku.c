#include <stdio.h>
/*  Trabalho 1 - Passos para resolver o sudoku
 *  Autor: Ricardo Pinto Giasson Filho
 *  Data: Dezembro 2020
 */
#define LIGA_BIT(NUM,BIT)  (NUM |= (1<<(BIT)))
#define TESTA_BIT(NUM,BIT) (NUM & (1<<(BIT)))
#define TAMANHO 9 
void menu();
void valoresAusentesLinha();
void valoresAusentesColuna();
void valoresAusentesGrupo();
void valoresNaoPodemCelula(mask,k,i,j);
void valoresPossiveisCelula(mask,k,i,j);
void varrematriz(int opcao);
int sudoku[TAMANHO][TAMANHO]=
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
void menu()
{
printf("\n\n                                 MENU\n\n\n");
printf("1-Valores Ausentes nas Linhas		2-Valores Ausentes nas Colunas\n\n");
printf("3-Valores Ausentes nos Grupos		4-Valores Possiveis nas Celulas\n\n");
printf("5-Valores Impossiveis nas Celulas	6-Quantidade de valores possíveis por célula\n\n");
printf("0-Sair\n\n\n");
}
void valoresAusentesLinha(){
	int lin,col = 0;
    int vet_padrao[TAMANHO]={1,2,3,4,5,6,7,8,9};
   // printf("Linha %d\n", lin);
    for ( lin = 0; lin < TAMANHO; lin++)
    {
        for (int i = 0; i < TAMANHO; i++)
        {
            vet_padrao[i] = i+1;
        }
        
        printf("Linha %d -> ", lin);
        for (col = 0; col < TAMANHO; col++)
        {
            
            if (sudoku[lin][col])
        {
            //printf(" %d ",jogoInicial[lin][col]);
            vet_padrao[sudoku[lin][col]-1] = 0;
        }else
        {
            continue;
        }
        vet_padrao[TAMANHO] = 1,2,3,4,5,6,7,8,9;
        }
        for (int i = 0; i < TAMANHO; i++)
        {
            if (vet_padrao[i] > 0){
            printf(" %d ",vet_padrao[i]);
            }
        }
        
        printf("\n");
        
    }
}
void valoresAusentesColuna(){

    int lin,col = 0;
    int vet_padrao[TAMANHO]={1,2,3,4,5,6,7,8,9};
   // printf("Linha %d\n", lin);
    for ( col = 0; col < TAMANHO; col++)
    {
        for (int i = 0; i < TAMANHO; i++)
        {
            vet_padrao[i] = i+1;
        }
        
        printf("Coluna %d -> ", col);
        for (lin = 0; lin < TAMANHO; lin++)
        {
            
            if (sudoku[lin][col])
        {
            //printf(" %d ",jogoInicial[lin][col]);
            vet_padrao[sudoku[lin][col]-1] = 0;
        }else
        {
            continue;
        }
        vet_padrao[TAMANHO] = 1,2,3,4,5,6,7,8,9;
        }
        for (int i = 0; i < TAMANHO; i++)
        {
            if (vet_padrao[i] > 0){
            printf(" %d ",vet_padrao[i]);
            }
        }
        
        printf("\n");
        
    }
}
void valoresAusentesGrupo()
{
int i,grup,lin,col;
int aux_lin = 0;
int aux_col = 0;
int cont = 0;
    int vet_padrao[TAMANHO]= {1,2,3,4,5,6,7,8,9};
    int vet_aux[TAMANHO]= {1,2,3,4,5,6,7,8,9};
for ( i = 0; i < 3; i++)
{
    printf("\nGrupo %d -> ", cont);
    for (int i = 0; i < TAMANHO; i++)
    {
        vet_padrao[i]= vet_aux[i];
    }
    for (lin = 0; lin < 3; lin++)
    {
        for ( col = aux_col; col < aux_col + 3; col++)
        {
            if (sudoku[lin][col])
            {
                vet_padrao[(sudoku[lin][col])-1] = 0;

            }
        }
    }
    for (int j = 0; j < TAMANHO; j++)
        {
            if (vet_padrao[j] > 0)
            {
                printf(" %d ",vet_padrao[j]);
            }
        }
    aux_col += 3;
    cont++;

}
aux_col = 0;
for ( i = 0; i < 3; i++)
{
    printf("\nGrupo %d -> ", cont);
    for (int i = 0; i < TAMANHO; i++)
    {
        vet_padrao[i]= vet_aux[i];
    }
    for (lin = 3; lin < 6; lin++)
    {
        for ( col = aux_col; col < aux_col + 3; col++)
        {
            if (sudoku[lin][col])
            {
                vet_padrao[(sudoku[lin][col])-1] = 0;

            }
        }
    }
    for (int j = 0; j < TAMANHO; j++)
        {
            if (vet_padrao[j] > 0)
            {
                printf(" %d ",vet_padrao[j]);
            }
        }
    aux_col += 3;
    cont++;

}
aux_col = 0;
for ( i = 0; i < 3; i++)
{
     printf("\nGrupo %d -> ", cont);
    for (int i = 0; i < TAMANHO; i++)
    {
        vet_padrao[i]= vet_aux[i];
    }
    for (lin = 6; lin < 9; lin++)
    {
        for ( col = aux_col; col < aux_col + 3; col++)
        {
            if (sudoku[lin][col])
            {
                vet_padrao[(sudoku[lin][col])-1] = 0;

            }
        }
    }
    for (int j = 0; j < TAMANHO; j++)
        {
            if (vet_padrao[j] > 0)
            {
                printf(" %d ",vet_padrao[j]);
            }
        }
    aux_col += 3;
    cont++;
}
    printf("\n\n");
}
void valoresPossiveisCelula(mask,k,i,j){

	for (k=1;k<=TAMANHO;k++)
	{
		if (TESTA_BIT(mask,k))
		{
			continue;
		}else 
            {
 		        printf("Valor Possivel Celula[%d][%d] = %d ",i,j,k);
            }
            

		
		printf("\n");
	}
    printf("\n");
	getchar();
}
void valoresNaoPodemCelula(mask,k,i,j){
 
 for (k=1;k<=TAMANHO;k++)
	{
		
		if ( TESTA_BIT(mask,k))
		{
		printf("Valor Impossivel Celula[%d][%d] = %d ",i,j,k);
		printf("\n");
		}
	}
	getchar();
} 
int NumeroBitsLigados(mask,lin,col) //numero de bits desligados = possibilidades por célula
{
	int i, res,aux;
 
	for (res=0,i=0;i<32;i++)
	{
		if ( TESTA_BIT(mask,i) )
		{
			res++;
		}
        aux++;
	}
    printf("Célula[%d][%d] = %d    ", lin,col,9-res);
    if (aux % 5 == 0)
    {
        printf("\n\n");
    }
    
	return res;
}
void MostraSudoku()
{
	int i, j;
 
	for (i=0;i<TAMANHO;i++)
	{
		if (i && (i%3==0)) printf("-------------------\n");
		for (j=0;j<TAMANHO;j++)
		{
			if (j && (j%3==0)) printf("|");
 
			if ( sudoku[i][j]==0 )
			{
				printf(". ");	
			}
			else
			{
				printf("%d ", sudoku[i][j] );
			}
        }
		printf("\n");
	}
	printf("\n");
}
void VarreMatriz( int opcao )
{
	int i, j, k, m, mask;
	int aux_linha, aux_col;
 
    for (i=0;i<TAMANHO;i++)
	{
		for (j=0;j<TAMANHO;j++)
		{
			if ( sudoku[i][j]==0 )//quando a casa for vazia
			{
				mask=0;
				for ( k=0; k<TAMANHO; k++ )//pesquisa por linha 
				{
					if (sudoku[i][k]!=0)
					{
						LIGA_BIT(mask,sudoku[i][k]);//liga os bits q indicam numeros impossiveis
						//printf("mask %d\n\n\n\n",mask);
					}
				}
                for ( k=0; k<TAMANHO; k++ )//pesquisa coluna
				{
					if (sudoku[k][j]!=0)
					{
						LIGA_BIT(mask,sudoku[k][j]);//liga os bits q indicam numeros impossiveis
					}
				}
				//pesquisa quadrado
                aux_linha = (i/3)*3;
				aux_col = (j/3)*3;
				//printf("quad_i=%d quad_j=%d\n",quad_i,quad_j);
				for (k=aux_linha; k<aux_linha+3;k++)
				{
					for (m=aux_col;m<aux_col+3;m++)
					{
						if (sudoku[k][m]!=0)
						{
							LIGA_BIT(mask,sudoku[k][m]); //liga os bits q indicam numeros impossiveis	
						}
					}
				}
                if (opcao == 4)
				{
					valoresPossiveisCelula(mask,k,i,j);
				}else if (opcao == 5)
				{
					valoresNaoPodemCelula(mask,k,i,j);
				}else
				{
					NumeroBitsLigados(mask,i,j);
				}
			}
		}
	}
}
int main()
{
MostraSudoku();
int opcao = 1;
menu();
scanf("%d",&opcao);
while (opcao != 0)
{
    MostraSudoku();
	printf("\n");
    
	switch (opcao)
	{
	case 1:
        printf("Valores Ausentes das Linha\n\n");
		valoresAusentesLinha();
		break;
	case 2:
        printf("Valores Ausentes das Colunas\n\n");
		valoresAusentesColuna();
		break;
	case 3:
        printf("Valores Ausentes dos Grupos\n\n");
		valoresAusentesGrupo();
		break;	
	case 4:
        printf("Valores Possiveis das Celulas\n\n");
		VarreMatriz(opcao);
		break;
	case 5:
        printf("Valores Impossiveis nas Celulas\n\n");
		VarreMatriz(opcao);
		break;
	case 6:
        printf("6-Quantidade de valores possíveis por célula\n\n");
		VarreMatriz(opcao);
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
