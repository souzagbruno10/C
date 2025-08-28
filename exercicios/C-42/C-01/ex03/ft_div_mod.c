/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogomesdesouza <brunogomesdesouza@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 18:58:23 by brunogomesd       #+#    #+#             */
/*   Updated: 2025/08/25 19:08:26 by brunogomesd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_div_mod(int a, int b, int *div, int *mod)
{

    *div = a / b;
    *mod = a % b;
    
}

#include <stdio.h>
int main (void)
{

    int a = 40, b = 2, div, mod;
    

    ft_div_mod(a, b, &div, &mod);
    printf("Resultado : %d", div);
    printf("\nResto: %d", mod);
    
    return 0;
}