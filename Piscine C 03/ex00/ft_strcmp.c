/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:50:57 by dinoguei          #+#    #+#             */
/*   Updated: 2022/10/06 16:34:29 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	printf("%d\n", ft_strcmp("abcd", "abce"));
	printf("%d\n", ft_strcmp("abc", "abc"));
	printf("%d\n", ft_strcmp("Akeno", "Himejima"));
}
*/
//explicacao
/*
while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
enquanto a s1 e a s2 n forem nulas, e se forem iguais
vai avancar no conteudo da str para ver se se confirma
essa condicao nela toda
	{
		s1++;
		s2++;
	}
se quando chegar ao fim, eles realmente
forem iguais vai returnar 0
	if (*s1 == *s2)
	{
		return (0);
	}
	else
caso n for igual, vai returnar a diferenca dos
seus decimais
	{
		return (*s1 - *s2);
	}
*/
