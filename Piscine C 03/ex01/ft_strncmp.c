/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:51:49 by dinoguei          #+#    #+#             */
/*   Updated: 2022/10/07 15:02:48 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i] || s2[i] > s1[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	printf("%d\n", ft_strncmp("Hello", "HelloWorld", 0));
	printf("%d\n", ft_strncmp("abcde", "abcdf", 4));
	printf("%d\n", ft_strncmp("Akeno", "Himejima", 0));
	printf("%d\n", strncmp("Akeno", "Himejima", 0));
}

//explicacao
/*
unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
enquanto s1 ou a s2 n forem nulas, e se o i for menor q n
das duas uma
	{
		if (s1[i] > s2[i] || s2[i] > s1[i])
se a s1 for maior q a s2, ou vice-versa ele vai retornar
a diferenca deles
			return (s1[i] - s2[i]);
caso a condicao de cima n se confirme, ele vai
continuar a avancar nos bits ate acontecer algo
		i++;
	}
	return (0);
*/
