#include <unistd.h>

int ft_iterative_factorial(int nb)
{
       int result = 1 ; 
       while (nb > 0)
       {
        result =  result * nb; 
        nb--;
       }
       return(result);
}
#include <stdio.h>
int main()
{
    int y  = ft_iterative_factorial(3);// value has to be 6 
    printf("%d",y);

}