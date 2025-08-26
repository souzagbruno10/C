/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogomesdesouza <brunogomesdesouza@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 19:24:37 by brunogomesd       #+#    #+#             */
/*   Updated: 2025/08/04 19:46:00 by brunogomesd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_ft(int *nbr)
{
    *nbr = 42;
}

#include <stdio.h>

int main (void)
{
    int x = 24;
    
    printf("\nAntes --> %d ", x);
    ft_ft(&x);
    printf("\nDepois --> %d ", x);
    
    return 0;    
}