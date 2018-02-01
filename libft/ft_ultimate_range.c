/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 16:42:17 by moana             #+#    #+#             */
/*   Updated: 2017/08/17 20:35:37 by moana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *r;

	i = 0;
	if (min >= max)
		return (0);
	r = (int*)malloc(sizeof(*r) * (max - min));
	while (min < max)
	{
		r[i] = min;
		min++;
		i++;
	}
	*range = r;
	return (i);
}
