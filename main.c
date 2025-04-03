#include<stdio.h>
#include"array.h"

int i;

int main()
{
    size_t dim = 0, pos;

    printf("inserisci la dimensione dell'array: ");
    scanf("%lu", &dim);

    double a[dim];

    for(i = 0;i < dim; i++)
    {
        printf("inserisci il %do elemento dell'array: ", i+1);
        scanf("%lf", &a[i]);
    }

    while(dim > 0)
    {
        printf("\nARRAY DEI VALORI INSERITI:\n");
        for(i = 0; i < dim; i++)
            printf("%.2lf\t", a[i]);

        printf("\n\ninserisci la posizione del numero da eliminare.\nscrivi 0 se vuoi uscire dal programma\n");
        scanf("%lu", &pos);

        if (pos != 0)
            array_remove(a, &dim, pos);
        else
            return 0;
    }

    printf("\nARRAY ELIMINATO\n\n");

    return 0;
}