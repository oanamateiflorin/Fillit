/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 20:40:50 by moana             #+#    #+#             */
/*   Updated: 2018/01/31 16:48:26 by moana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "../libft/libft.h"

char	**alocare_matrice(int size)
{
	char	**mat;
	int		j;
	int		k;

	j = 0;
	mat = (char**)malloc(sizeof(char*) * size + 1);
	mat[size] = NULL;
	while (j < size)
	{
		k = 0;
		mat[j] = (char*)malloc(sizeof(char) * size + 1);
		mat[j][size] = '\0';
		while (k < size)
		{
			mat[j][k] = '.';
			k++;
		}
		j++;
	}
	return (mat);
}

int		ft_sqrt(int i)
{
	int r;

	r = 0;
	while (r * r < i)
		r++;
	return (r);
}

int		backtracking(char **sol, char **tet, int x, int size)
{
	int		i;
	int		j;
	char	str[17];

	if (!tet[x])
		return (1);
	ft_strcpy(str, tet[x]);
	i = -1;
	while (++i < size)
	{
		j = -1;
		while (++j < size)
		{
			if (sol[i][j] == '.' && i + lungime(str) <= size)
				if (verif(sol, ignor_pct(str), i, j))
				{
					inserare_solutie(sol, ignor_pct(str), i, j);
					if (backtracking(sol, tet, x + 1, size) == 1)
						return (1);
					else
						stergere_solutie(sol, x, i, 0);
				}
		}
	}
	return (0);
}

void	fillit(char **str, int nr_piese)
{
	char	**solutie;
	int		size;

	size = ft_sqrt(nr_piese * 4);
	solutie = alocare_matrice(size);
	while (backtracking(solutie, str, 0, size) == 0)
	{
		size++;
		golire_sol(solutie);
		solutie = alocare_matrice(size);
	}
	ft_print_mat(solutie);
}
