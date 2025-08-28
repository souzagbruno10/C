/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogomesdesouza <brunogomesdesouza@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 15:01:56 by brunogomesd       #+#    #+#             */
/*   Updated: 2025/07/02 15:20:01 by brunogomesd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
    
}

/*int main (void)
{
    ft_putchar('$');
    return(0);
}*/
