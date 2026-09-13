#include <unistd.h> 
#include <limits.h>

int myAtoi(char* s)
{
    int i = 0; 
    long int result = 0;
    int sign = 1; 
    while ((s[i] >= 9 && s[i] <= 13) || s[i] == 32 )
    {
        i++;     
        }
    if (s[i] == '-' || s[i] == '+')
    {
        if (s[i] == '-')
        {
            sign = sign * -1 ; 
        }
        i++;
    }  
    while (s[i] >= '0' && s[i] <= '9')
    {
        if (sign == 1)
        {
            if (result > INT_MAX / 10 ||
                (result == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10))
                return (INT_MAX);
        }
        else
        {
            if (result > 214748364 ||
                (result == 214748364 && s[i] - '0' > 8))
                return (INT_MIN);
        }
        result  =  result * 10 + (s[i] - 48);
        i++;
    }
    return(result * sign);
}