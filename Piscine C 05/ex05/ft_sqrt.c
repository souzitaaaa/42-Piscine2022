/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:21:29 by dinoguei          #+#    #+#             */
/*   Updated: 2022/10/13 15:24:22 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	res;
	long	num;

	num = nb;
	if (num <= 0)
	{
		return (0);
	}
	if (num == 1)
	{
		return (1);
	}
	res = 2;
	if (num >= 2)
	{
		while (res * res <= num)
		{
			if (res * res == num)
			{
				return (res);
			}
			res++;
		}
	}
	return (0);
}
/*
int	main(void)
{
	printf("%i\n", ft_sqrt(4));
	printf("%i\n", ft_sqrt(9));
	printf("%i\n", ft_sqrt(-1));
}
*/
