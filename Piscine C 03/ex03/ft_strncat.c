/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:17:11 by dinoguei          #+#    #+#             */
/*   Updated: 2022/10/08 11:23:39 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	while (j < nb && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "Himejima";
	char	dest[] = "Akeno ";

	printf("%s", ft_strncat(dest, src, 9));
}
*/
//explicacao
/*
unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != 0)
mesmo comportamento do strlen
	{
		i++;
	}
	while (i < nb && src[j] != '\0')
desta vez, ao contrario do anterior q so via
se a src ia ser nula, vai ver tambem
que o i n pode ser maior ou igual que nb
e enquanto isto se satisfazer vai fazer a mesma
coisa do anterior
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
*/
