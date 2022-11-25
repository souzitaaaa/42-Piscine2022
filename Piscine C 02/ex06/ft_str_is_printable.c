/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:03:14 by dinoguei          #+#    #+#             */
/*   Updated: 2022/10/03 16:53:41 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 127)
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
	printf("%d\n", ft_str_is_printable("abcdefghijklmnopqrstuvwxyz"));
	printf("%d\n", ft_str_is_printable("abcde€f123456"));
	printf("%d\n", ft_str_is_printable("dinoguei_gostoso"));
	printf("%d", ft_str_is_printable(""));
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
os unicos caracteres printaveis de acordo com a tabela ascii ficam
entre 32 e o 127, por isso qualquer outro valor sem ser esses nao
vai retornar 1
		if (str[i] >= 32 && str[i] <= 127)
			i++;
		else
			return (0);
	}
	return (1);
*/
