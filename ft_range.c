#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

// mi
int *ft_range(int min , int max)
{
    int i  = 0;
    int *array ;
    array = malloc(sizeof(int) * (max - min));
    if (array == NULL)
    {
        return(NULL);
    }
    while (i < max - min)
    {
       array[i] = min + i;
       i++;
    }


    return(array);
}

int main ()
{
    int min = 3; 
    int max  = 9; 
    int  *i = ft_range(min,max);
    int j =0 ;  

    while (j < max - min )
    {  
        printf("%d",i[j]);
        j++;
    }
    free(i);
    
}