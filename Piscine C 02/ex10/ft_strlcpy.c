/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:11:59 by dinoguei          #+#    #+#             */
/*   Updated: 2022/10/05 15:53:57 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	if (size != '\0')
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
	dest[i] = '\0';
	}
	return (j);
}

#include <stdio.h>

int	main(void)
{
	char	dest[] = "";
	char	src[] = "Himejima";

	printf("%d | %s", ft_strlcpy(dest, src, 5), dest);
}

//explicacao
/*
unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
mesma coisa do ft_strlen, vai ver a lenght da string
	{
		j++;
	}
	if (size != '\0')
caso o size n for nulo
	{
		while (src[i] != '\0' && i < (size - 1))
mesma coisa do ft_strncpy, vai passar de uma para a outra
		{
			dest[i] = src[i];
			i++;
		}
	dest[i] = '\0';
vai adicionar um caracter nulo no fim dela
	}
	return (j);
*/	
