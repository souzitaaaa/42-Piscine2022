/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:08:11 by dinoguei          #+#    #+#             */
/*   Updated: 2022/10/07 15:20:00 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "Himejima";
	char	dest[] = "Akeno ";

	printf("%s", ft_strcat(dest, src));
}
*/
//explicacao
/*
int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
mesmo comportamento do strlen
	{
		i++;
	}
	while (src[j] != '\0')
enquanto o src n for nulo, vai 
passar o conteudo dessa str para 
o dest
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
*/
