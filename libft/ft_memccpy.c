/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 14:22:38 by moana             #+#    #+#             */
/*   Updated: 2018/01/17 14:28:30 by moana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	int				i;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	while ((size_t)i < n)
	{
		d[i] = s[i];
		if (s[i] == (unsigned char)c)
			return ((char *)d + i + 1);
		i++;
	}
	return (NULL);
}
