/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:06:41 by dinoguei          #+#    #+#             */
/*   Updated: 2022/10/12 17:12:53 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	unsigned int	a;

	a = nb;
	if (power > 1)
		a = nb * ft_recursive_power(nb, power - 1);
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (a);
}
/*
int	main(void)
{
	printf("%i\n", ft_recursive_power(5, 0));
	printf("%i\n", ft_recursive_power(5, -1));
	printf("%i", ft_recursive_power(5, 5));
}
*/
