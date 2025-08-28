/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogomesdesouza <brunogomesdesouza@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 17:47:16 by brunogomesd       #+#    #+#             */
/*   Updated: 2025/07/19 16:09:24 by brunogomesd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb2(void)
{
    int x;
    int y;

    x = 0;
    while ( x <= 98){
        y = x + 1;
        while ( y <= 99)
        {
            ft_putchar((x / 10) + '0');
            ft_putchar((x % 10) + '0');
            ft_putchar(' ');
            ft_putchar((y / 10) + '0');
            ft_putchar((y % 10) + '0');
            if (!( x == 98 && y == 99))
            {
                ft_putchar(',');
                ft_putchar(' ');
            }
            y++;
        }
        x++;
    }
}

int main (void)
{
    ft_print_comb2();
    return(0);
}