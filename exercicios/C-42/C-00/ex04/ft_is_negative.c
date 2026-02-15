/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogomesdesouza <brunogomesdesouza@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 18:26:49 by brunogomesd       #+#    #+#             */
/*   Updated: 2025/07/19 14:34:51 by brunogomesd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void ft_is_negative (int n)
{
    if (n < 0)
    {
        write(1, "N\n", 2);
        
    }
    else
    {
        write(1, "P\n", 2);
    }
    
}

/*int main (void)
{
    ft_is_negative(-42);
    return(0);
}*/