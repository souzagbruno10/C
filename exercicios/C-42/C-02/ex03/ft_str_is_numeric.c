/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogomesdesouza <brunogomesdesouza@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 00:06:23 by brunogomesd       #+#    #+#             */
/*   Updated: 2025/09/12 00:19:40 by brunogomesd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_numeric(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(48 <= str[i] && str[i] <= 57)
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
    char str[] = "";//1
    char str1[] = "0123456789"; //1
    char str2[] = "12345@u@u";//0

    printf("Resultado: %d\n", ft_str_is_numeric(str));
    printf("Resultado: %d\n", ft_str_is_numeric(str1));
    printf("Resultado: %d", ft_str_is_numeric(str2));

    return 0;
}*/