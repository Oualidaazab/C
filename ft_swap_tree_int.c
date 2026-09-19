//*****************************************************************************/
//Write a function that swap betwin tree integers a , b , c                    |     
// Example                                                                     |    
// a = 1 , b = 2  , c = 3                                                      |         
// a = 3 ; b = 1 , c = 2                                                       |
// allow function write                                                        | 
/******************************************************************************/
#include <unistd.h>
#include <stdio.h>

void ft_putNumber(int nb )
{
    int i  = 0;
    char storage[20];
    while (nb > 0)
    {
        storage[i] = (nb % 10) + 48; 
        nb = nb / 10;
        i++;
    }
    i--; 
    while(i >= 0)
    {
        write(1,&storage[i],1);
        i--;
    }
    write(1,"\n",1);

}
int swap_int(int ***a ,int ******b , int *****c)
{
    int swap ; 
    int temp = ***a;
    int temp2 = ******b;
    swap  = ***a ; 
    ***a = *****c ; 
    *****c = temp2;
    ******b = temp ;
}

int main ()
{
    int i = 0;
    int a = 1; 
    int b = 2;
    int c = 3;
    // add to a
    int *a1 = &a;
    int **a2 = &a1; 
    // add to b 
    int *b1 = &b;  
    int  **b2 = &b1 ;  
    int ***b3 =  &b2;  
    int ****b4 = &b3;  
    int *****b5 = &b4;  
    // add to c
    int *c1 = &c;  
    int  **c2 = &c1 ;  
    int ***c3 =  &c2;  
    int ****c4 = &c3; 
    swap_int(&a2,&b5,&c4);
    ft_putNumber(a); 
    ft_putNumber(b); 
    ft_putNumber(c);


}