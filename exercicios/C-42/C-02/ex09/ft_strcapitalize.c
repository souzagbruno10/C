/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogomesdesouza <brunogomesdesouza@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 13:00:37 by brunogomesd       #+#    #+#             */
/*   Updated: 2025/09/13 13:13:02 by brunogomesd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcapitalize(char *str)
{
    int i = 0;
    
    while(str[i] != '\0')
    {
        if ((i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' || str[ i - 1] == '\n' ) 
        && (str[i] >= 'a' && str[i] <= 'z'))
        {//primeira letra 0 ou se antes da primeira letra é espaço, ou tab , ou quebra linha e o intervalo é do minusculo a até o z;
            str[i] = str[i] - 32;// transforma minuscula em maiuscula 
        }
        i++;
}
return 0;
}

#include <stdio.h>
int main(void)
{
    char str[] = "eu vou passar na piscina da 42 e me tornar cadete em 2026!";

    printf("\nAntes : %s", str);

    ft_strcapitalize(str);

    printf("\nDepois : %s", str);

    return 0;
}