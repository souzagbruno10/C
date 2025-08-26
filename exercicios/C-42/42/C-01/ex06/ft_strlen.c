/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogomesdesouza <brunogomesdesouza@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 06:34:47 by brunogomesd       #+#    #+#             */
/*   Updated: 2025/08/26 07:04:39 by brunogomesd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
    int count = 0;
    
    while (*str != '\0')
    {
        count += 1; 
        str++;
        
    }
    return count;
}

#include <stdio.h>

int main (void)
{
    char x[12] = "abcdefghijk";

    ft_strlen(x);

    int lenght = ft_strlen(x);
    
    printf("%d", lenght);
    
    return 0;
}