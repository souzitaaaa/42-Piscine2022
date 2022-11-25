/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:55:02 by dinoguei          #+#    #+#             */
/*   Updated: 2022/10/12 17:05:37 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	unsigned int	a;

	a = nb;
	while (power > 1)
	{
		a *= nb;
		power--;
	}
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (a);
}
/*
int	main(void)
{
	printf("%i\n", ft_iterative_power(5, 0));
	printf("%i\n", ft_iterative_power(5, -1));
	printf("%i", ft_iterative_power(5, 5));
}
*/
