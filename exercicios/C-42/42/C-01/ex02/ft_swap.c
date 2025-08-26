/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogomesdesouza <brunogomesdesouza@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 18:32:15 by brunogomesd       #+#    #+#             */
/*   Updated: 2025/08/26 07:38:28 by brunogomesd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_swap( int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
  
    
}

/*#include <stdio.h>

int main (void)
{
    int x, y;

    x = 42;
    y = 8;

    ft_swap(&x, &y);
    printf("x é 42 mas vira %d /", x);
    printf("y é 8 mas vira %d ", y);

    return 0 ;
}*/
