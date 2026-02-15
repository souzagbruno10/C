/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogomesdesouza <brunogomesdesouza@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 18:44:23 by brunogomesd       #+#    #+#             */
/*   Updated: 2025/07/19 17:26:44 by brunogomesd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar (char c)
{
    write (1, &c, 1);
}

void ft_putnbr(int nb)
{
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb; //transforma negativo em positivo
    }
    if (nb >= 10) // condicao de recursao para quebrar os digitos um por um
    {
        ft_putnbr ( nb / 10); //dezena
    
        ft_putchar (nb % 10 + '0'); //unidade
    }
    else
    {
        ft_putchar(nb + '0'); // converte o numero para caractere do numero 0 a 9.
    
    }
}

int main (void)
{
    int numbers = -2147483648; // menor int --> nao dá pra virar positivo
    ft_putchar('\n');
    ft_putchar('-'); //por isso coloco manualmente em char
    ft_putchar('2');// .....
    ft_putnbr(147473648);// e coloco o resto
    return(0);
}