/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogomesdesouza <brunogomesdesouza@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 07:21:20 by brunogomesd       #+#    #+#             */
/*   Updated: 2025/09/12 07:39:34 by brunogomesd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_printable(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (32 <= str[i] && str[i] <= 126)
        {// intervalo de caracteres imprimiveis ascii
    
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
int main(void)
{
    char str[] = "\t";//0
    char str1[] = "\n";//0
    char str2[] = "Nada es definitivo";//1
    char str3[] = "";//1

    printf("Resultado: %d\n", ft_str_is_printable(str));
    printf("Resultado: %d\n", ft_str_is_printable(str1));
    printf("Resultado: %d\n", ft_str_is_printable(str2));
    printf("Resultado: %d\n", ft_str_is_printable(str3));
    
    return 0;
}*/