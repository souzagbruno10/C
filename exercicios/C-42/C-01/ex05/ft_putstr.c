/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogomesdesouza <brunogomesdesouza@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 05:56:35 by brunogomesd       #+#    #+#             */
/*   Updated: 2025/08/26 06:30:13 by brunogomesd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
    *str = write(1,"Str sem stdlib", 14);
}

int main (void)
{ 
    char x;
    ft_putstr(&x);
   
    
    return 0;    
}