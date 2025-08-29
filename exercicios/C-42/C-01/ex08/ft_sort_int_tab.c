/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogomesdesouza <brunogomesdesouza@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 15:24:00 by brunogomesd       #+#    #+#             */
/*   Updated: 2025/08/29 16:30:26 by brunogomesd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_sort_int_tab(int *tab, int size)
{
int temp, i, j;
    
 for (int i = 0; i < size - 1; i++)
  {
    for (int j = i + 1; j < size; j++)
    {
        if(tab[j] < tab[i])
        {
            temp = tab[i];
            tab[i] = tab[j];
            tab[j] = temp; 
        }
    }
  }
    
}

/*#include <stdio.h>

int main(void)
{
    int tab [10] = {10,9,8,7,6,5,4,3,2,1};
    int size = 10;

    printf("Antes ---> ");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }

    ft_sort_int_tab(tab, size);

    printf("\nDepois ---> ");

    for(int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }

    return 0;
}*/