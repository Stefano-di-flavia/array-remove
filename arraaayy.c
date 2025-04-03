#include<stdio.h>
extern void array_remove(double *a, size_t *dim, size_t pos)
{
    int i;

    if (pos > *dim || pos < 0)
    {
        printf("\nPOSIZIONE FUORI DAL RANGE (1 - %ld)\n\n", *dim);
        return;
    }

    for(i = pos-1; i < *dim; i++)
        a[i] = a[i+1];
    
    *dim = *dim - 1;
}