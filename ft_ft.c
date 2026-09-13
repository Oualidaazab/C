#include <unistd.h>
#include <stdio.h>
// hello user ==> h***o u**r
int main(int ac , char **av)
{
    int i =0;
 
    if (ac == 2)
    {
        while (av[1][i] != '\0')
        {
            //
            if (i == 0 || av[1][i-1] == ' ')
            {
                write(1,&av[1][i],1);
            }
            else if (av[1][i+1] == ' ' || av[1][i+1] == '\0' || av[1][i] == ' ')
            {
                write(1,&av[1][i],1);
            }
            else 
            {
                write(1,"*",1);
            }
            i++;
        }
        write(1,"\n",1);
    }
    else 
    {
        write(1,"\n",1);
    }
}