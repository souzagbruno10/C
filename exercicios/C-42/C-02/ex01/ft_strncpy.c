/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogomesdesouza <brunogomesdesouza@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 19:53:57 by brunogomesd       #+#    #+#             */
/*   Updated: 2025/09/11 20:28:32 by brunogomesd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
   unsigned int i = 0;

   while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;            
    }

    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return dest;
}
   
/*#include <stdio.h>

int main (void)
{
    char src[20] = "abcdefghijk";
    char dest[3] = "def";
    int n = 6; // numero exato de caractere que vai ser copiado pra des

    printf("Antes dest --> : %s" , dest);
    
    ft_strncpy(dest, src, n);

    printf("\nDepois dest --> : %s", dest);
    

    return 0;
}*/