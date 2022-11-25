/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 16:20:31 by dinoguei          #+#    #+#             */
/*   Updated: 2022/10/04 19:24:53 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src [i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char src[] = "Akeno";
	char dest[] = "";

	ft_strcpy(dest, src);
	printf("%s", dest);	
}
*/
//explicacao
/*

	int	i;

	i = 0;
	while (src[i] != '\0')
enquanto a string n chegar ao seu caracter nulo
	{
		dest[i] = src [i];
		i++;
copia o mesmo bit do src para o dest e adiciona um valor ao de i
	}
	dest[i] = '\0';
que o caracter em q o i vai estar, devido ao
loop vai ter sempre mais um valor, vai transformar
esse ultimo bit num caracter nulo
	return (dest);
*/
