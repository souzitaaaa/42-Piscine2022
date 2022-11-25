/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:52:10 by dinoguei          #+#    #+#             */
/*   Updated: 2022/09/26 17:57:56 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	negativo;
	char	resto;

	negativo = 'N';
	resto = 'P';
	if (n < 0)
	{
		write(1, &negativo, 1);
	}
	else
	{
		write(1, &resto, 1);
	}
}
/*
int	main(void)
{
	ft_is_negative(1);
	return (0);
}
*/
