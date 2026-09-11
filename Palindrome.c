#include <unistd.h>
#include <stdbool.h>

int reverse(int x)
{
    int result = 0;

    while (x != 0)
    {
        int digit =  x  % 10 ;
        x = x / 10;
        // overflow ckeck_out
        if (result  < -214748364 ||  result ==  -214748364 && digit < -8)
        {
            return(0);
        }
        if (result > 214748364  || result  == 214748364 && digit > 7)
        {
            return (0);
        }    
        result = result * 10 + digit;
    }
    return(result);
} 

bool isPalindrome(int x)
{
    if (x == reverse(x))
    {
        return(true);
    }    
    else
    {
        return(false);
    }
}
#include <stdio.h> 
int main ()
{
    int x = 121;
    printf("%d",isPalindrome(x));
}