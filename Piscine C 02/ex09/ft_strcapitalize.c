/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:19:36 by dinoguei          #+#    #+#             */
/*   Updated: 2022/10/04 16:19:03 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (!(str[i -1] >= 'a' && str[i -1] <= 'z'))
			{
				if (!(str[i -1] >= 'A' && str[i -1] <= 'Z'))
				{
					if (!(str[i -1] >= '0' && str[i -1] <= '9'))
						str[i] -= 32;
				}
			}
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char str[] = "pOnHo o caRro, tiro o carro, á horA 9ue eu quiser";

	printf("%s", ft_strcapitalize(str));
	return 0;
}
*/
//explicacao
/*
	int	i;
vai ver o str[0] e caso for minuscula vai transformar em 
maiuscula
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
caso tenha maisculas vai transforma-las em minusculas
			str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z')
e se esta condicao se satisfazer vai começar a procurar
se é para meter maiuscula no caracter de tras
		{
			if (!(str[i -1] >= 'a' && str[i -1] <= 'z'))
caso o caracter atras seja diferente de a-z
			{
				if (!(str[i -1] >= 'A' && str[i -1] <= 'Z'))
caso o caracter atras seja diferente de A-Z
				{
					if (!(str[i -1] >= '0' && str[i -1] <= '9'))
caso o caracter atras seja diferente de 0-9
vai transformar o caracter em maiuscula com o -32
						str[i] -= 32;
				}
			}
		}
		i++;
	}
	return (str);
}
*/
