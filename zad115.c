/*  Program treba uneseni skalara pomnozit s 2D matricom.  */

#include <stdio.h>

int main()
{
    int A[10][10],i,j,r,s;
    int row, col, broj;

    printf("Unesi broj redaka: ");
        scanf("%d", &r);
        printf("\nUnesi broj stupaca: ");
        scanf("%d",&s);
        printf("\nUnesi elemente matrice: \n");
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < s; j++)
            {
                 printf("\nUnesi A[%d][%d] : ",i,j);
                 scanf("%d", &A[i][j]);
        }
    }

    printf("\nDana matrica je: \n\n");

        for (i = 0; i < r; ++i)
        {
            for (j = 0; j < s; ++j)
            {
                printf("\t%d", A[i][j]);
            }
            printf("\n\n");
        }

    /* Ucitaj broj skojim mnozimo matricu */
    printf("\nUnesi skalar: ");
    scanf("%d", &broj);

    /*
     * Mnozenje sa skalarom
     */
    for(i=0; i<r; i++)
    {
        for(j=0; j<s; j++)
        {
            A[i][j] = broj * A[i][j];
        }
    }

    /*
     * Ispis rezultata
     */
    printf("\nKonacan rezultat je = \n\n");
    for (i = 0; i < r; ++i)
        {
            for (j = 0; j < s; ++j)
            {
                printf("\t%d", A[i][j]);
            }
            printf("\n\n");
        }

    return 0;
}
