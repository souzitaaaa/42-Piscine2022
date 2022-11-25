/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:22:54 by dinoguei          #+#    #+#             */
/*   Updated: 2022/10/11 20:28:10 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **str, char **str2)
{
	char	*guardar;

	guardar = *str;
	*str = *str2;
	*str2 = guardar;
}

int	ft_strcmp(char *str, char *str2)
{
	int	i;

	i = 0;
	while ((str[i] != '\0' || str2[i] != '\0') && str[i] == str2[i])
	{
		i++;
	}
	return (str[i] - str2[i]);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	j;
	int	l;

	l = 1;
	while (l < argc -1)
	{
		j = 1;
		while (j < argc - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
				ft_swap(&argv[j], &argv[j + 1]);
			j++;
		}
		l++;
	}
	j = 1;
	while (argc > j)
	{
		ft_putstr(argv[j]);
		write(1, "\n", 1);
		j++;
	}
	return (0);
}
