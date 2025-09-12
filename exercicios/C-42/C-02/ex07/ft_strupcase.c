/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogomesdesouza <brunogomesdesouza@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 15:59:43 by brunogomesd       #+#    #+#             */
/*   Updated: 2025/09/12 16:12:37 by brunogomesd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_struppercase(char *str)
{
    int i = 0;
    
    while (str[i] != '\0')
    {
        if ( 'a' <= str[i] && str[i] <= 'z')
        {//32 é a diff entre 97 [a] minuscula e 65[A] MAIUSCULA
            str[i] = str[i] - 32;
        }
        i++;
    }
    return 0;
}

/*#include <stdio.h>
int main (void)
{
    char str[] = "xablau";
    
    printf("Antes : %s", str);

    ft_struppercase(str);

    printf("\nDepois : %s", str);
    
    return 0;
}*/