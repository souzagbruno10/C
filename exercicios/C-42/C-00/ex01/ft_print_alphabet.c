/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogomesdesouza <brunogomesdesouza@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 21:52:24 by brunogomesd       #+#    #+#             */
/*   Updated: 2025/07/02 15:20:57 by brunogomesd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void ft_print_alphabet(void)
{
  char letter;
  letter = 'a';

  while (letter <= 'z')
  {
    write(1, &letter, 1);
    letter++;
  }
}

/*int main (void)
{
  ft_print_alphabet();
  return(0);
}*/