#include <unistd.h>
#include <stdio.h>

int  ft_iterative_power(int nb)
{
    int i  = 1;
    int result = 1;  
    while( i < nb)
    {
        if (i*i == nb)
        {
            result =  i;
        }
        i++; 
    }
    return(result);
}
int main(void)
{
    int nb  = 9;  
    int y = ft_iterative_power(nb); // retur value  ===>  3    
    printf("%d",y);
}