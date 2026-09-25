

/*
** Reverse a String
**
** Write a function that takes a string as input and reverses
** the order of its characters.
**
** Example:
**     Input:  "hello world"
**     Output: "dlrow olleh"
**
** The function should traverse the string and return the
** reversed version of the original string.
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: OUAILD AAZAB <oualid @student.42.fr>      +#+  +:+       +#+         */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 12:00:00 by oualid aazab      #+#    #+#             */
/*   Updated: 2026/09/25 12:00:00 by oualid aazab     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>  

int ft_strlen(char *string)
{
    int i  = 0 ;  
    while(string[i] != '\0')
    {
        i++; 
    }
    return(i);
}

void ft_revers(char *string)
{
      int len  = ft_strlen(string);
      while(len--)
      {
        write(1,&string[len],1); 
      }
}
int main(int ac , char **av)
{
    if(ac >= 2)
    {

        ft_revers(av[1]);
    }
    else
    {
        write(1,"\n",1);
    }
}
