/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:58:08 by dinoguei          #+#    #+#             */
/*   Updated: 2022/10/03 17:44:17 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char str[] = "AKENO";
	
	printf("%s", ft_strlowcase(str));
}
*/
//explicacao
/*
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
se dentro da stri detetar algum caracter entre A-Z, 
com o +32 vai torna lo maiusculo de acordo com a
tabela ASCII, exemplo a 97 e o A 65
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
*/