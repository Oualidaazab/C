#include <unistd.h>
#include <stdio.h>
void put_number(int nb)
{
    int i   = 0 ; 
    char string[30]; 
    if  (nb  == -2147483648 )
    {
        write(1,"-2147483648",11);
        return;
    }
    if (nb < 0 )
    {
        write(1,"-",1);
        nb  = -nb;  
    }
    if (nb ==  0)
    {
        write(1,"0",1);
    }
    while (nb  >  0)
    {
        string[i] =  (nb %10) + 48; 
        nb  =  nb / 10  ; 
        i++;  
    }
    i =  i - 1;  
    while (i >= 0) 
    {
        write(1,&string[i],1);  
        i--;
    }

}
int ft_atio(char *string)
{
    int  i = 0 ;
    int chek =  1;
    int result = 0; 
    while ((string[i] >= 9 && string[i] <= 13) ||  string[i] ==  32)
    {
        i++ ;  // skip all spaces 
    } 
    if (string[i] ==  '-' ||  string[i] ==  '-')
    {
        if (string[i] ==  '-')
        {
            chek = chek *  -1 ; 
        }
        i++;  
    }
    while (string[i] >= '0' && string[i] <= '9')
    {
            result = result * 10 + (string[i] - 48 );
            i++; 
    }
    return (result * chek);
}

int main (int ac , char **av)
{
    if (ac  ==  2 )
    {
        int j  =  ft_atio(av[1]) ;  
        put_number(j); 
        
        write(1,"\n",1); 
    }
    else
    {
        write(1,"\n",1);
    }
}