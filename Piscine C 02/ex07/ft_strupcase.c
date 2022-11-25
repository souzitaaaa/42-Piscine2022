/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:58:08 by dinoguei          #+#    #+#             */
/*   Updated: 2022/10/03 17:38:16 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char str[] = "akeno";
	
	printf("%s", ft_strupcase(str));
}
*/
//explicacao
/*
int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
se dentro da stri detetar algum caracter entre a-z, 
com o -32 vai torna lo maiusculo de acordo com a
tabela ASCII, exemplo a 97 e o A 65
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
*/
