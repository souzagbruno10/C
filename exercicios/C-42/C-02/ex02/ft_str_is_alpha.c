/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogomesdesouza <brunogomesdesouza@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 20:32:29 by brunogomesd       #+#    #+#             */
/*   Updated: 2025/09/11 21:50:06 by brunogomesd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_alpha(char *str)
{

int i = 0;
   
while(str[i] != '\0')
{
if (('a' <= str[i] && str[i] <= 'z') || ('A' <= str[i] && str[i] <= 'Z'))
{
//se estiver entre 97 e 122 é minuscula ...se estiver entre 65 e 90 é maiuscula
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
    char str[]= "";
    char str1[] = "abacaxi";
    char str2[] = "Xabl@u";
    
    printf("Resultado --> %d\n", ft_str_is_alpha(str));
    printf("Resultado --> %d\n", ft_str_is_alpha(str1));
    printf("Resultado --> %d", ft_str_is_alpha(str2));
    
    return 0;
}*/