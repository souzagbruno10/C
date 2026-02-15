/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogomesdesouza <brunogomesdesouza@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 07:03:10 by brunogomesd       #+#    #+#             */
/*   Updated: 2025/09/12 07:12:15 by brunogomesd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_uppercase(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
    if ('A' <= str[i] && str[i] <= 'Z')
    {
            
    }
    else
    {
    return 0;
    }
    i++;
    }
    return 1;
}

/*#include <stdio.h>
int main (void)
{
    char str[] = "XABLAU";//1
    char str1[] = "XABlaU";//0
    char str2[] = "";//1
    
    printf("Resultado: %d\n", ft_str_is_uppercase(str));
    printf("Resultado: %d\n", ft_str_is_uppercase(str1));
    printf("Resultado: %d\n", ft_str_is_uppercase(str2));
    
    return 0;
}*/