/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogomesdesouza <brunogomesdesouza@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 16:45:34 by brunogomesd       #+#    #+#             */
/*   Updated: 2025/08/28 18:49:34 by brunogomesd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_rev_int_tab(int *tab, int size)
{
   int i = 0;
   int j = size - 1; // 11 - 1 pq ele conta o 0
   int temp;

   while (i < j)
   {//aqui estabelece de onde elas vao partir
    temp = tab[i]; // tab 1 vai pra temp
    tab[i] = tab[j];// tab[i] recebe tab[j] = 10
    tab[j] = temp;//tab[j] recebe temp = 1
    
    i++; //avanca do inicio;
    j--; // recua do fim;
   }
}

/*#include <stdio.h>

int main ()
{
   int size[10] = {1,2,3,4,5,6,7,8,9,10};
   int tab = 10;

   printf("Antes --> : ");
   for (int i = 0; i < 10; i++)
   {
    printf("%d ", size[i]); 
   } 
   
   ft_rev_int_tab(size, tab);

   printf("\nDepois --> : ");
   for (int i = 0; i < 10; i++)
   {
    printf("%d ", size[i]);
   }
   
    return 0;
}*/