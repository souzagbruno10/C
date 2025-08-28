/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogomesdesouza <brunogomesdesouza@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 18:19:19 by brunogomesd       #+#    #+#             */
/*   Updated: 2025/07/19 14:34:23 by brunogomesd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void ft_print_numbers(void)
{
    write (1, "0123456789101112131415", 22);
}

/*int main (void)
{
    ft_print_numbers();
    return(0);
}*/