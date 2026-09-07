#include  <unistd.h> 
#include <stdio.h> 

// encryption function 
void    encrypt(char *string , char  *thekey)
{
    int i  = 0 ;  
    int key = 0 ;  
    char new_position[20];
    while (string[i] != '\0')
    {
        if  (string[i] >=  'a' && string [i] <= 'z' )
        {
            if  (thekey[key] == '\0')
            {
                key  = 0 ;
            }
            new_position[i] = ((string[i] - 'a') + (thekey[key] - 'a')) % 26 + 'a';  
            write(1,&new_position[i],1); 
            key++; 
        }
        else if ((string[i] >=  'A' && string [i] <= 'Z'))
        {
            if  (thekey[key] == '\0')
            {
                key  = 0 ;
            }
            new_position[i] = ((string[i] - 'A') + (thekey[key] - 'a')) % 26 + 'A';
            write(1,&new_position[i],1); 
            key++;
        }
        i++;
    }
    write(1,"\n",1);
}


int main(int ac , char **av)
{
    if (ac == 3)
    {
        encrypt(av[1],av[2]);
    }
    else
    {
        write(1,"\n",1);
    }
}