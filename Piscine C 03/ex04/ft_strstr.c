/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:26:51 by dinoguei          #+#    #+#             */
/*   Updated: 2022/10/08 11:52:08 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[j] != '\0')
	{
		while (str[j + i] == to_find[i] && str[j + i] != '\0')
		{
			i++;
		}
		if (to_find[i] == '\0')
			return (str + j);
		j++;
		i = 0;
	}
	return (0);
}
/*
int	main(void)
{
	char	palheiro[] = "O bacalhau quer alho É o melhor tempero";
	char	agulha[] = "alho";

	printf("%s", ft_strstr(palheiro, agulha));
}
*/
//explicacao
/*
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[i] == '\0')
caso to_find esteja vazio vai devolver
a str inteira
		return (str);
	while (str[j] != '\0')
enquanto str n seja nula
	{
		while (str[j + i] == to_find[i] && str[j + i] != '\0')
caso str j + i seja igual ao to_find i e n seja nula, vai adicinar i
ate ver se tem todos os caracteres 
		{
			i++;
		}
		if (to_find[i] == '\0')
			return (str + j);
		j++;
	}
	return (0);
*/
