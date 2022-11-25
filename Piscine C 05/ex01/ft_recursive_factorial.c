/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:16:58 by dinoguei          #+#    #+#             */
/*   Updated: 2022/10/12 16:51:09 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	unsigned int	a;

	a = 1;
	if (nb > 0)
		a = nb * ft_recursive_factorial(nb - 1);
	if (nb < 0)
		return (0);
	return (a);
}
/*
int	main(void)
{
	printf("%i\n", ft_recursive_factorial(0));
	printf("%i\n", ft_recursive_factorial(1));
	printf("%i", ft_recursive_factorial(5));
}
*/
