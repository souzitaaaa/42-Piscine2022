/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:18:37 by dinoguei          #+#    #+#             */
/*   Updated: 2022/10/08 13:46:30 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	guardar;
	int	sinal;

	i = 0;
	guardar = 0;
	sinal = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sinal *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		guardar *= 10;
		guardar += str[i] - 48;
		i++;
	}
	guardar *= sinal;
	return (guardar);
}
/*
int	main(void)
{
	char	*idk = "   +--+-12324fd5";

	printf("%d", ft_atoi(idk));
}
*/
