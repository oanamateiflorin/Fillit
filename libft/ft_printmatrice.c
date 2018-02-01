/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printmatrice.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 16:43:19 by moana             #+#    #+#             */
/*   Updated: 2018/01/18 17:16:29 by moana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_printmatrice(char **matric)
{
	int i;
	int j;

	i = 0;
	while (matric[i])
	{
		j = 0;
		while (matric[i][j])
		{
			ft_putchar(matric[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	ft_putchar('\n');
}
