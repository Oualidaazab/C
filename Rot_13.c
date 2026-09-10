#include <unistd.h> 

void    rot13(char  *string)
{
    int i = 0;
    while (string[i] != '\0')
    {
        if(string[i] >= 'a' && string[i] <= 'n' ||string[i] >= 'A' && string[i] <= 'N')
        {
                string[i] = string[i] +13 ;
                write(1,&string[i],1);
        }
        else if (string[i] >= 'M' && string[i] <= 'z' || string[i] >= 'M' && string[i] <= 'Z')
        {
            string[i] = string[i] - 13 ;  
            write(1,&string[i],1);
        }
        i++;
    }
}
int main()
{ 
    char root[] = "OULID";
    rot13(root);
}