/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowercase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogomesdesouza <brunogomesdesouza@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 16:15:14 by brunogomesd       #+#    #+#             */
/*   Updated: 2025/09/12 16:20:28 by brunogomesd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_lowercase(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if ('A' <= str[i] && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        i++;
    } 
    return 0;
}

/*#include <stdio.h>
int main (void)
{
    char str[] = "XABLAU";

    printf("Antes : %s", str);

    ft_lowercase(str);

    printf("\nDepois : %s", str);

    return 0;
}*/
