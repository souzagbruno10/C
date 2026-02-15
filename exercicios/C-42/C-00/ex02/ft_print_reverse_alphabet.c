/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogomesdesouza <brunogomesdesouza@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 18:13:03 by brunogomesd       #+#    #+#             */
/*   Updated: 2025/07/19 14:33:49 by brunogomesd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
    char letter;
    letter = 'z';

    while (letter >= 'a')
    {
        write(1, &letter, 1);
        letter--;
    }
}

/*int main (void)
{
    ft_print_reverse_alphabet();
    return(0);
}*/