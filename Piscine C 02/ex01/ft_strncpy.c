/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 16:37:34 by dinoguei          #+#    #+#             */
/*   Updated: 2022/10/03 14:17:44 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	src[] = "Akeno";
	char	dest[] = "";
	
	ft_strncpy(dest, src, 6);
	printf("%s", dest);
}
*/
//explicacao
/*
unsigned int	i;

	i = 0;
	while (src[i] != '\0' && (i < n))
enquanto a string n chegar ao caracter nulo e o i
for mener que o n
	{
		dest[i] = src[i];
		i++;
copia o mesmo bit do src para o dest e adiciona um valor ao de i
	}
	while (i < n)
quando o src chegar ao caracter nulo e o i ainda for menor que n
vai adicionar caracteres nulos
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
*/
