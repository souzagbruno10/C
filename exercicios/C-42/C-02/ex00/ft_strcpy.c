/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogomesdesouza <brunogomesdesouza@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 16:53:16 by brunogomesd       #+#    #+#             */
/*   Updated: 2025/08/29 17:15:43 by brunogomesd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// O objetivo da 42, do processo seletivo, é mostrar como funciona uma bibilioteca por baixo dos panos. Este código por exemplo, poderia ser facilmente escrito com uma string.h, mas como ao entrar como cadete escreveremos a nosso própria biblioteca, faz todo sentido a 42 nao permitir o uso delas na piscina.

// com string.h / stdlib.h;
// --> strcpy (char dest, char src);

char *ft_strcpy(char *dest, char *src)
{
  int i;
  i = 0;
  
  while (src[i] != '\0')
  {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';
  return dest;
}


/*#include <stdio.h>

int main (void)
{
    char src [15] = "Hello 42";
    char dest [15];

    printf("Antes --> %s", src);
    
    ft_strcpy(dest, src);
    
    
   printf("\nDepois --> %s", dest);

   return 0;
}*/