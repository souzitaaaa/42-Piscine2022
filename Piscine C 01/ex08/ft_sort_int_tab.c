/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:32:02 by dinoguei          #+#    #+#             */
/*   Updated: 2022/10/01 19:45:01 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	while (size >= 0)
	{
		i = 0;
		while (i < size -1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab [i + 1];
				tab [i + 1] = swap;
			}
			i++;
		}
		size--;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int tab[6] = {7, 9, 2, 0, 4, 1};
	int	size;

	size = 6;
	ft_sort_int_tab(tab, size);
	printf("%d", tab[0]);
	printf("%d", tab[1]);
	printf("%d", tab[2]);
	printf("%d", tab[3]);
	printf("%d", tab[4]);
	printf("%d", tab[5]);
	return (0);
}
*/
