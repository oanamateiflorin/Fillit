/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 01:09:47 by moana             #+#    #+#             */
/*   Updated: 2018/01/31 16:32:35 by moana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "../libft/libft.h"

int		nr_piese(char *str)
{
	int i;
	int nr_p;

	nr_p = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n' && str[i + 1] == '\n')
			nr_p++;
		i++;
	}
	return (nr_p + 1);
}

char	**transform(char *str, int count, int i)
{
	int		j;
	int		k;
	char	**mat;

	k = 0;
	count = nr_piese(str);
	mat = (char**)malloc(sizeof(char*) * (count + 1));
	while (++i < count)
	{
		mat[i] = (char*)malloc(sizeof(char) * 16 + 1);
		j = 0;
		while (j < 16)
		{
			if (str[k] != '\n' && str[k] != '.')
				mat[i][j++] = 'A' + i;
			if (str[k] != '\n' && str[k] == '.')
				mat[i][j++] = '.';
			k++;
			aux(str, k, j);
		}
		mat[i][16] = '\0';
	}
	mat[i] = NULL;
	return (mat);
}

void	golire_sol(char **sol)
{
	int i;

	i = 0;
	while (sol[i])
	{
		free(sol[i]);
		i++;
	}
	free(sol);
}

char	**stergere_solutie(char **sol, int x, int t, int f)
{
	int i;
	int j;

	i = t;
	while (sol[i])
	{
		j = f;
		while (sol[i][j])
		{
			if (sol[i][j] == 'A' + x)
				sol[i][j] = '.';
			j++;
		}
		i++;
	}
	return (sol);
}

void	ft_print_mat(char **mat)
{
	int i;

	i = 0;
	while (mat[i])
	{
		ft_putstr(mat[i]);
		ft_putchar('\n');
		i++;
	}
}
