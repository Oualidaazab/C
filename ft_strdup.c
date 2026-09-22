#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int str_len(char *string)
{
    int len = 0; 
    while (string[len])
    {
        len++;
    }
    return(len);
}
char *ft_strdup(char *string)
{
        int i  = 0;
        char *dest ; 
        int len  = str_len(string);
        dest  =malloc(sizeof(char) *(len+1));
        if (!dest) // if (dest == NULL){return NULL}
        {
            return(0);
        }
       else{
        while (string[i] != '\0')
        {
            dest[i] = string[i];
            i++;
        }
        dest[i] = '\0';
        }
        i =0 ;
        while(dest[i] != '\0')
        {
            write(1,&dest[i],1);
            i++;
        }
}

int main()
{
    char string[] = "hello user";
    ft_strdup(string);
}