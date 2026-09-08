//a.out "123" ==> 6  
#include <unistd.h>
#include <stdlib.h>

// put_number function but we neet to handel only positiv number 
// result will  alocated 
//a.out "123" "123"  ==> 246   
void    put_number(int x)
{
    int i = 0 ; 
    char string [29];
    while (x > 0 )
    {
        string[i] = (x % 10) + 48;
        x  = x / 10;
        i++;
    }
    i--;  
    while (i >= 0)
    {
        write(1,&string[i],1);
        i--;
    }
}

int sum(char *string ,char *string2)
{
    int  i  = 0 ;  
    int  count  = 0;
    int *result ; 
    result = malloc(sizeof(int) * 20); 
    if(result == NULL)
    {
        return(1);
    }
    while(string[i] != '\0' && string2[i] != '\0')
    {
        count  = (string2[i] - 48 ) + (string[i] - 48);
        if (result[i])
        {
            result[i] =  count;
        }
        i++;
    }
    result [i] = '\0';
    i  = 0 ;  
    while  (result[i] != '\0')
    {
        put_number(result[i]);
        i++;
    }
    free(result);
}

int main(int ac , char **av)
{
    if (ac ==3)
    {
        (sum(av[1],av[2])); 
        write(1,"\n",1);
    }
    else 
    {
        write(1,"\n",1);
    }
}