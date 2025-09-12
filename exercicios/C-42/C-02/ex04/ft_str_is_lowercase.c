/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogomesdesouza <brunogomesdesouza@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 06:40:10 by brunogomesd       #+#    #+#             */
/*   Updated: 2025/09/12 06:51:48 by brunogomesd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_lowercase(char *str)
{
    int i = 0;
    
    while (str[i] != '\0')
    {
    if ('a' <= str[i] && str[i] <= 'z')
    {// se está entre o intervalo de 97 a 122, entao minuscula...
            
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
    char str[] = "xablaU";//0
    char str1[] = "xablau";//1
    char str2[] = "";//1

    printf("Resultado: %d\n", ft_str_is_lowercase(str));
    printf("Resultado: %d\n", ft_str_is_lowercase(str1));
    printf("Resultado: %d", ft_str_is_lowercase(str2));

    return 0;
}*/