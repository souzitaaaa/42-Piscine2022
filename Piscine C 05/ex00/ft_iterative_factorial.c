/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:02:23 by dinoguei          #+#    #+#             */
/*   Updated: 2022/10/12 16:14:50 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	a;

	a = 1;
	while (nb > 0)
	{
		a *= nb;
		nb--;
	}
	if (nb < 0)
		return (0);
	return (a);
}
/*
int	main(void)
{
	printf("%i\n", ft_iterative_factorial(0));
	printf("%i\n", ft_iterative_factorial(1));
	printf("%i", ft_iterative_factorial(5));
}
*/
