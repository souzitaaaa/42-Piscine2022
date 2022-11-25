/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:03:14 by dinoguei          #+#    #+#             */
/*   Updated: 2022/10/03 15:34:40 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
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
	printf("%d\n", ft_str_is_alpha("abcdefghijklmnopqrstuvwxyz"));
	printf("%d\n", ft_str_is_alpha("abcdef123456"));
	printf("%d\n", ft_str_is_alpha("dinoguei_gostoso"));
	printf("%d", ft_str_is_alpha(""));
}
*/
//explicacao
/*
int	i;

	i = 0;
	if (str[i] == '\0')
caso str for nula, retorna 1
		return (1);
	while (str[i] != '\0')
enquanto str n chegar ao caracter nulo
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
se dentro da str estiver algum caracter entre A-Z e a-z vai
adicionar o valor de i para continuar a ver se se confirma sempre
e caso seja verdade acaba o if e returna 1
			|| (str[i] >= 'a' && str[i] <= 'z'))
			i++;
caso contrario vai returnar 0
		else
			return (0);
	}
	return (1);
*/
