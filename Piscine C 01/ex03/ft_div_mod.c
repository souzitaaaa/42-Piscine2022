/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:30:14 by dinoguei          #+#    #+#             */
/*   Updated: 2022/10/01 18:05:12 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
		*div = a / b;
		*mod = a % b;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;
	int	*ptr;
	int	*ptr2;

	a = 841;
	b = 74;
	ptr = &div;
	ptr2 = &mod;
	ft_div_mod(a, b, ptr, ptr2);
	printf("%d\n", div);
	printf("%d", mod);
}
*/
