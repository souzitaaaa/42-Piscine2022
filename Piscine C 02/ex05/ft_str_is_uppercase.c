/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:03:14 by dinoguei          #+#    #+#             */
/*   Updated: 2022/10/03 16:16:29 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
	printf("%d\n", ft_str_is_uppercase("abcdefghijklmnopqrstuvwxyz"));
	printf("%d\n", ft_str_is_uppercase("abcdef123456"));
	printf("%d\n", ft_str_is_uppercase("dinoguei_gostoso"));
	printf("%d\n", ft_str_is_uppercase(""));
	printf("%d", ft_str_is_uppercase("AKENO"));
}
*/
//explicacao
/*
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
caso a stri contenha algum caracter maiusculo
A-Z vai retornar 1
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
*/