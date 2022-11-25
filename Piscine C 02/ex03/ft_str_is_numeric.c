/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:03:14 by dinoguei          #+#    #+#             */
/*   Updated: 2022/10/03 15:43:37 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_str_is_numeric("abcdefghijklmnopqrstuvwxyz"));
	printf("%d\n", ft_str_is_numeric("abcdef123456"));
	printf("%d\n", ft_str_is_numeric("dinoguei_gostoso"));
	printf("%d\n", ft_str_is_numeric(""));
	printf("%d", ft_str_is_numeric("0123456789"));
}
*/
//explicacao
/*
int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
caso dentro da str contenha algum digito vai returnar 1
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
*/
