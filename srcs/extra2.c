/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/31 15:53:08 by moana             #+#    #+#             */
/*   Updated: 2018/01/31 16:37:57 by moana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "../libft/libft.h"

void	eroare(void)
{
	ft_putendl("error");
	exit(EXIT_FAILURE);
}

void	aux(char *str, int k, int j)
{
	if (str[k] == '\n' && str[k + 1] == '\n')
		if (j != 16)
			eroare();
}

int		verif_pct_linie(char *str)
{
	if (str[0] == '.' && str[1] == '.' && str[2] == '.' && str[3] == '.')
		return (1);
	return (0);
}

char	*ignor_pct(char *str)
{
	while (verif_pct_linie(str) == 1)
		str += 4;
	return (str);
}
