/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogomesdesouza <brunogomesdesouza@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 19:11:02 by brunogomesd       #+#    #+#             */
/*   Updated: 2025/08/26 07:38:01 by brunogomesd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_ultimate_div_mod(int *a, int *b)
{
    int x, y;
    
    x = *a / *b;
    y = *a % *b;
    
    *a = x;
    *b = y;
}


/*#include <stdio.h>

int main (void)
{
    
    int a = 20;
    int b = 10;
  
    
    ft_ultimate_div_mod(&a, &b);
   

    printf("Resultado da divisão: %d\n", a);
    printf("Resto: %d ", b);

    return 0;
}*/