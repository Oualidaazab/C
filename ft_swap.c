#include <unistd.h> 
#include <stdio.h>

// allowed function only write();

void ft_swap(char *s1, char **s2,char ***s3)
{
    int i  = 0; 
    char swap ;  
    char *temp = *s2;
    while (s1[i] && (*s2)[i])
    {
        swap =  s1[i];
        s1[i] = (*s2)[i];
        (*s2)[i] = swap ;  
        i++;
    }
    int j= 0 ;  
    char swap2 ;  
    while (temp[j] && (**s3)[j])
    {
        swap2  = temp[j];
        temp[j] = (**s3)[j];
        (**s3)[j] = swap2;
        j++;
    }
}

int main()
{
    char string1 [] ="123"; // #@!  s2
    char string2 [] = "#@!"; // ABC s3
    char string3 [] = "ABC"; // 123 s2 
    int i = 0;  
    int j = 0;  
    int z = 0;
    char *s21 = string2;
    char *s31 = string3; 
    char **s32 = &s31;

    ft_swap(string1,&s21,&s32);
    
    while(string1[i] != '\0')
    {
        write(1,&string1[i],1);
        i++;
    }
    write(1,"\n",1);
    while(string2[j] != '\0')
    {
        write(1,&string2[j],1);
        j++;
    }
    write(1,"\n",1);
    while(string3[z] != '\0')
    {
        write(1,&string3[z],1);
        z++;
    }
}