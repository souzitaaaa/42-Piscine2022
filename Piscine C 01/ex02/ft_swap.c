/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:21:01 by dinoguei          #+#    #+#             */
/*   Updated: 2022/10/01 18:02:41 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	guardar;

	guardar = *a;
	*a = *b;
	*b = guardar;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 6;
	b = 9;
	ft_swap(&a, &b);
	printf("%d \n", a);
	printf("%d", b);
}
*/
