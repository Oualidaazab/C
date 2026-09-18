#include <unistd.h>

int *swap(int ******delta , int ****zeta)
{
    int swap ; 
    swap = ****zeta;
    ****zeta = ******delta ;  
    ******delta  = swap; 
}
#include <stdio.h>
int main()
{
    int a = 100;
    int b = 40; 
    int *a1 = &a;  
    int **a2 = &a1;  
    int ***a3  = &a2; 
    int ****a4 = &a3;
    int *****a5 = &a4;  
    // addresse to b2 
    int *b1  = &b ;  
    int **b2  = &b1;  
    int ***b3 =  &b2 ;  
    swap(&a5,&b3);
    // a ==> 40 
    // b ==> 100 
    printf("a ===> %d\nb ===> %d",a,b);
}