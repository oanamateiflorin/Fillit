/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 15:52:42 by moana             #+#    #+#             */
/*   Updated: 2017/08/17 20:33:29 by moana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_range(int min, int max)
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
	return (r);
}
