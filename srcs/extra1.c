/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 22:56:04 by moana             #+#    #+#             */
/*   Updated: 2018/01/31 16:48:24 by moana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "../libft/libft.h"

int		lungime(char *str)
{
	int nr;
	int i;

	nr = 0;
	i = 0;
	while (i < 4)
	{
		if (verif_pct_linie(str) == 0)
			nr++;
		str = str + 4;
		i++;
	}
	return (nr);
}

int		tetri_departat(char *str, char c)
{
	int mn;
	int k;
	int i;

	i = 0;
	mn = 3;
	while (i < 4)
	{
		k = 0;
		while (str[k] != c)
			k++;
		if (mn > k)
			mn = k;
		str = str + 4;
		i++;
	}
	return (mn);
}

int		first_char(char *str)
{
	int i;

	i = 0;
	while (str[i] == '.')
		i++;
	return (i % 4);
}

int		verif(char **mat, char *str, int i, int j)
{
	int		x;
	int		k;
	int		col;
	char	c;

	c = str[first_char(str)];
	x = ft_strlen(str) / 4;
	if (j - first_char(str) + tetri_departat(str, c) < 0)
		return (0);
	while (x-- > 0)
	{
		col = j;
		k = first_char(str);
		while (str[k] == c)
		{
			if (mat[i][col] != '.')
				return (0);
			col++;
			k++;
		}
		str = str + 4;
		j = j + first_char(str) - first_char(str - 4);
		i++;
	}
	return (1);
}

char	**inserare_solutie(char **mat, char *str, int i, int j)
{
	int		k;
	int		x;
	int		col;
	char	c;

	c = str[first_char(str)];
	x = ft_strlen(str) / 4;
	while (x-- > 0)
	{
		col = j;
		k = first_char(str);
		while (str[k] == c)
		{
			mat[i][col] = c;
			k++;
			col++;
		}
		str = str + 4;
		j = j + first_char(str) - first_char(str - 4);
		i++;
	}
	return (mat);
}
